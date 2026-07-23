/*
 * XREFs of NtQuerySecurityPolicy @ 0x14068C778
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SepReleaseUnicodeStringArray @ 0x1403E2468 (SepReleaseUnicodeStringArray.c)
 *     SepCaptureUnicodeStringArray @ 0x140410BD0 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySecurityPolicy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        unsigned __int64 a6)
{
  PVOID PoolWithQuotaTag; // rdi
  char PreviousMode; // si
  int v11; // ebx
  _DWORD *v12; // r15
  unsigned int v13; // eax
  void *v14; // r14
  unsigned int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  int NumberOfBytes_4; // [rsp+38h] [rbp-50h] BYREF
  volatile void *v19; // [rsp+40h] [rbp-48h]
  void *v20; // [rsp+48h] [rbp-40h] BYREF
  void *v21; // [rsp+50h] [rbp-38h] BYREF
  void *v22; // [rsp+58h] [rbp-30h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  PoolWithQuotaTag = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v17) = PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1u, PreviousMode, &v20);
  if ( v11 >= 0 )
  {
    v11 = SepCaptureUnicodeStringArray(a2, 1u, PreviousMode, &v21);
    if ( v11 >= 0 )
    {
      v11 = SepCaptureUnicodeStringArray(a3, 1u, PreviousMode, &v22);
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a4 + 4 > 0x7FFFFFFF0000LL || a4 + 4 < a4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          NumberOfBytes_4 = *(_DWORD *)a4;
          v12 = (_DWORD *)a6;
          if ( (a6 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a6 + 4 > 0x7FFFFFFF0000LL || a6 + 4 < a6 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v13 = *(_DWORD *)a6;
          HIDWORD(v17) = *(_DWORD *)a6;
          v14 = (void *)Address;
          if ( Address )
          {
            ProbeForWrite(Address, v13, 1u);
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, HIDWORD(v17), 0x20206553u);
            v19 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v11 = -1073741670;
              goto LABEL_29;
            }
          }
        }
        else
        {
          NumberOfBytes_4 = *(_DWORD *)a4;
          v14 = (void *)Address;
          PoolWithQuotaTag = (PVOID)Address;
          v19 = Address;
          v12 = (_DWORD *)a6;
          HIDWORD(v17) = *(_DWORD *)a6;
        }
        if ( qword_1403011B8 )
        {
          if ( !PoolWithQuotaTag || HIDWORD(v17) )
            v11 = qword_1403011B8(v20, v21, v22, &NumberOfBytes_4, PoolWithQuotaTag, (char *)&v17 + 4, v17);
          else
            v11 = -1073741811;
        }
        else
        {
          v11 = -1073741637;
        }
        if ( v11 >= 0 )
        {
          *(_DWORD *)a4 = NumberOfBytes_4;
          v15 = HIDWORD(v17);
          *v12 = HIDWORD(v17);
          if ( v14 )
          {
            if ( PreviousMode == 1 )
              memmove(v14, PoolWithQuotaTag, v15);
          }
        }
      }
    }
  }
LABEL_29:
  SepReleaseUnicodeStringArray(v20, PreviousMode);
  SepReleaseUnicodeStringArray(v21, PreviousMode);
  SepReleaseUnicodeStringArray(v22, PreviousMode);
  if ( PoolWithQuotaTag && PreviousMode == 1 )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v11;
}
