/*
 * XREFs of DrvDbGetDriverInfFileMappedProperty @ 0x14045D4D8
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140445038 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1404442A0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x14045D60C (DrvDbGetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedProperty(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _UNKNOWN **v11; // r8
  __int64 v12; // r10
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  _UNKNOWN **v16; // rdi
  int RegValueMappedProperty; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  Handle[0] = 0LL;
  v11 = &off_14023CD40;
  *a5 = 0;
  *a8 = 0;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *v11;
    if ( *((_DWORD *)*v11 + 4) == *(_DWORD *)(a4 + 16) )
    {
      v14 = *v13 - *(_QWORD *)a4;
      if ( *v13 == *(_QWORD *)a4 )
        v14 = v13[1] - *(_QWORD *)(a4 + 8);
      if ( !v14 )
        break;
    }
    v12 = (unsigned int)(v12 + 1);
    v11 += 5;
    if ( (unsigned int)v12 >= 4 )
      return (unsigned int)-1073741802;
  }
  v15 = 5 * v12;
  v16 = &off_14023CD40 + 5 * v12;
  if ( !v16 )
    return (unsigned int)-1073741802;
  if ( !a3 )
  {
    RegValueMappedProperty = DrvDbOpenObjectRegKey(a1, 0LL, 3u, a2, 1, 0, Handle, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_11;
    LODWORD(a3) = Handle[0];
  }
  RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v15, a3, (_DWORD)v16, (_DWORD)a5, a6, a7, (__int64)a8);
LABEL_11:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)RegValueMappedProperty;
}
