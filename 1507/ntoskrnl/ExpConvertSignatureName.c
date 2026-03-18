/*
 * XREFs of ExpConvertSignatureName @ 0x1406F0CF4
 * Callers:
 *     ExpTranslateArcPath @ 0x1406F33AC (ExpTranslateArcPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpCreateOutputARC @ 0x1406F0F04 (ExpCreateOutputARC.c)
 *     ExpCreateOutputEFI @ 0x1406F0FF0 (ExpCreateOutputEFI.c)
 *     ExpCreateOutputNT @ 0x1406F11CC (ExpCreateOutputNT.c)
 *     ExpFindDiskSignature @ 0x1406F1718 (ExpFindDiskSignature.c)
 *     ExpParseSignatureName @ 0x1406F203C (ExpParseSignatureName.c)
 *     ExpTranslateSymbolicLink @ 0x1406F3F64 (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpConvertSignatureName(int a1, void *a2, __int64 a3, wchar_t *a4, void *Src)
{
  __int64 result; // rax
  char v9; // di
  int v10; // eax
  int v11; // r12d
  wchar_t *PoolWithTag; // rax
  WCHAR *v13; // rdi
  int v14; // r12d
  unsigned int OutputNT; // eax
  unsigned int v16; // ebx
  __int64 v17; // [rsp+20h] [rbp-59h]
  char v18[8]; // [rsp+40h] [rbp-39h] BYREF
  int v19; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-2Dh] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-19h] BYREF
  __int64 v23; // [rsp+68h] [rbp-11h] BYREF
  __int64 v24; // [rsp+70h] [rbp-9h] BYREF
  char v25; // [rsp+78h] [rbp-1h] BYREF

  result = ExpParseSignatureName(a4, (__int64)&v24, (__int64)&v23, (__int64)&v18[1], (__int64)v18);
  if ( (int)result >= 0 )
  {
    if ( v18[0] == 1 && a1 == 4 )
      return ExpCreateOutputEFI(a2, (__int64)&v24, (__int64)&v23, Src, v18[1]);
    v9 = v18[1];
    v10 = 0;
    if ( !v18[1] )
      v10 = *(_DWORD *)&v18[4];
    v19 = v10;
    result = ExpFindDiskSignature(
               (unsigned int)&v25,
               (unsigned int)&v19,
               (unsigned int)&v20,
               (unsigned int)v21,
               (__int64)&v22,
               v18[1]);
    if ( (int)result >= 0 )
    {
      v11 = v19;
      if ( v18[0] == 1 && (*(_DWORD *)&v18[4] != v19 || v24 != v21[0] || v23 != v22) )
        return 3221225485LL;
      if ( a1 == 4 )
        return ExpCreateOutputEFI(a2, (__int64)v21, (__int64)&v22, Src, v9);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      LODWORD(v17) = v11;
      swprintf_s(PoolWithTag, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v20, v17);
      v14 = ExpTranslateSymbolicLink(v13);
      ExFreePoolWithTag(v13, 0);
      if ( v14 < 0 )
        return (unsigned int)v14;
      if ( a1 == 3 )
      {
        OutputNT = ExpCreateOutputNT(a2, a3, v21, Src);
      }
      else
      {
        if ( a1 != 1 )
        {
          v16 = -1073741811;
          goto LABEL_26;
        }
        OutputNT = ExpCreateOutputARC(a2, a3, v21, Src);
      }
      v16 = OutputNT;
LABEL_26:
      ExFreePoolWithTag((PVOID)v21[1], 0);
      return v16;
    }
  }
  return result;
}
