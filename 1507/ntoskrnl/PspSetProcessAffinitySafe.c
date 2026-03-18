/*
 * XREFs of PspSetProcessAffinitySafe @ 0x1406C0654
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1406C085C (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KeSetAffinityProcess @ 0x14016DD9C (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PspSetProcessAffinitySafe(__int64 a1, char a2, __int16 *a3, __int64 *a4, int *a5)
{
  int v5; // r15d
  int v10; // ebx
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  char v13; // r12
  __int64 v14; // rdi
  int v15; // eax
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // ax
  unsigned __int16 i; // dx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int16 *v21; // r9
  unsigned __int16 v22; // dx
  unsigned __int16 v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v25; // [rsp+32h] [rbp-CEh]
  int v26; // [rsp+34h] [rbp-CCh]
  _QWORD v27[21]; // [rsp+38h] [rbp-C8h]
  _DWORD v28[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v29[21]; // [rsp+E8h] [rbp-18h] BYREF

  v5 = 0;
  v10 = 1;
  if ( a4 )
  {
    v28[1] = 0;
    v28[0] = 1310721;
    memset(v29, 0, 0xA0uLL);
    v11 = *((_WORD *)a4 + 4);
    v12 = *a4;
    if ( v11 )
      LOWORD(v28[0]) = v11 + 1;
    a3 = (__int16 *)v28;
    v13 = 1;
    v29[v11] |= v12;
  }
  else
  {
    v13 = 0;
    if ( (a2 & 2) != 0 )
      v13 = 2;
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 944);
    if ( v14 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v14 + 56), 1u);
      v15 = *(_DWORD *)(v14 + 856);
      if ( (v15 & 0x10) != 0 )
      {
        if ( (v15 & 0x4000) == 0 )
        {
LABEL_29:
          v10 = 0;
          goto LABEL_32;
        }
        v16 = *a3;
        v17 = *(_WORD *)(v14 + 616);
        if ( (unsigned __int16)*a3 < v17 )
          v17 = *a3;
        v24 = v17;
        for ( i = 0; i < v24; v17 = v24 )
        {
          v19 = i++;
          v27[v19] = *(_QWORD *)(v14 + 8 * v19 + 624) & *(_QWORD *)&a3[4 * v19 + 4];
        }
        v26 = 0;
        v25 = 20;
        if ( i < 0x14u )
        {
          do
          {
            v20 = i++;
            v27[v20] = 0LL;
          }
          while ( i < v25 );
          v17 = v24;
        }
        if ( v16 >= v17 )
        {
          v21 = a3;
          v16 = v17;
        }
        else
        {
          v21 = (__int16 *)&v24;
        }
        v22 = 0;
        if ( v16 )
        {
          while ( *(_QWORD *)&a3[4 * v22 + 4] == v27[v22] )
          {
            if ( ++v22 >= v16 )
              goto LABEL_27;
          }
          goto LABEL_29;
        }
LABEL_27:
        while ( v22 < (unsigned __int16)*v21 )
        {
          if ( *(_QWORD *)&v21[4 * v22 + 4] )
            goto LABEL_29;
          ++v22;
        }
      }
    }
  }
  v5 = KeSetAffinityProcess(a1, v13, a3);
LABEL_32:
  if ( v14 )
    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
  if ( v5 >= 0 )
    *a5 = v10;
  return (unsigned int)v5;
}
