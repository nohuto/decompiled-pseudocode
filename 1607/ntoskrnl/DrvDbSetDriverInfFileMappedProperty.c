/*
 * XREFs of DrvDbSetDriverInfFileMappedProperty @ 0x1406E2CF4
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x1404E6E34 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1406E33F4 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverInfFileMappedProperty(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // r10
  _UNKNOWN **i; // rbx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  int v15; // ecx
  _UNKNOWN **v16; // rsi
  int v17; // [rsp+20h] [rbp-38h]
  char v18; // [rsp+28h] [rbp-30h]
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  v7 = 0LL;
  for ( i = &off_1402581E0; ; i += 5 )
  {
    v11 = *i;
    if ( *((_DWORD *)*i + 4) == *(_DWORD *)(a4 + 16) )
    {
      v12 = *v11 - *(_QWORD *)a4;
      if ( *v11 == *(_QWORD *)a4 )
        v12 = v11[1] - *(_QWORD *)(a4 + 8);
      if ( !v12 )
        break;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 4 )
      return (unsigned int)-1073741802;
  }
  v15 = 5 * v7;
  v16 = &off_1402581E0 + 5 * v7;
  if ( !v16 )
    return (unsigned int)-1073741802;
  if ( a5 != *((_DWORD *)v16 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v18 = 0;
    v17 = 2;
    v13 = DrvDbOpenObjectRegKey(a1, 0LL, 3, a2, v17, v18, Handle, 0LL);
    if ( v13 < 0 )
      goto LABEL_17;
    LODWORD(a3) = Handle[0];
  }
  v13 = DrvDbSetRegValueMappedProperty(v15, a3, (_DWORD)v16, a5, a6, a7);
LABEL_17:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v13;
}
