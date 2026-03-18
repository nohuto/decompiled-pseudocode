/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x1404107B0
 * Callers:
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     ObpCaptureObjectName @ 0x140410A10 (ObpCaptureObjectName.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeComputeQuotaInformationSize @ 0x14046B800 (SeComputeQuotaInformationSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        char a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  _QWORD *v6; // rdi
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r14
  int v13; // r12d
  _QWORD *v14; // r13
  __int64 v15; // rcx
  int v16; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h]
  int v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+58h] [rbp-40h]

  v6 = a4;
  v19 = 0LL;
  result = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  *(_QWORD *)(a5 + 56) = 0LL;
  if ( !a3 )
    return result;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 && KeGetCurrentThread()->PreviousMode && (a3 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_DWORD *)a3 == 48 )
  {
    *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
    v9 = *(_DWORD *)(a3 + 24);
    v18 = v9;
    if ( a2 )
    {
      v9 &= ~0x200u;
      v18 = v9;
    }
    if ( (v9 & 0xFFFEE00D) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      *(_DWORD *)a5 = v9;
      v10 = *(_QWORD *)(a3 + 16);
      v19 = v10;
      v11 = *(_QWORD *)(a3 + 32);
      v20 = v11;
      v12 = *(_QWORD *)(a3 + 40);
      v17 = v12;
      if ( v12 )
      {
        if ( a1 )
        {
          if ( KeGetCurrentThread()->PreviousMode && (v17 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v17;
          v11 = v20;
          v10 = v19;
        }
        *(_QWORD *)(a5 + 48) = *(_QWORD *)v12;
        *(_DWORD *)(a5 + 56) = *(_DWORD *)(v12 + 8);
      }
      if ( v11 )
      {
        v14 = (_QWORD *)(a5 + 32);
        LOBYTE(a4) = 1;
        v13 = SeCaptureSecurityDescriptor(v11, a1, 1, (_DWORD)a4, a5 + 32);
        if ( v13 < 0 )
        {
          *v14 = 0LL;
          goto LABEL_34;
        }
        SeComputeQuotaInformationSize(*v14, &v16);
        *(_DWORD *)(a5 + 28) = v16;
      }
      if ( !v12 )
        goto LABEL_21;
      *(_DWORD *)(a5 + 48) = 12;
      *(_QWORD *)(a5 + 40) = a5 + 48;
      if ( *(_BYTE *)(a5 + 56) >= 2u )
      {
        v13 = -1073741811;
      }
      else
      {
        if ( *(_DWORD *)(a5 + 52) <= 3u )
        {
LABEL_21:
          if ( v10 )
          {
            v13 = ObpCaptureObjectName(a1, v10, v6, a6);
            if ( v13 >= 0 )
              return 0LL;
          }
          else
          {
            if ( !*(_QWORD *)(a5 + 8) )
              return 0LL;
            v13 = -1073741773;
          }
          goto LABEL_34;
        }
        v13 = -1073741659;
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_34:
  v15 = *(_QWORD *)(a5 + 32);
  if ( v15 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSecurityDescriptor(v15, *(unsigned __int8 *)(a5 + 16), a3);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v13;
}
