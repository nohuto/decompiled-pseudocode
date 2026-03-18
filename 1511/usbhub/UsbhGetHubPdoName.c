/*
 * XREFs of UsbhGetHubPdoName @ 0x1C003C380
 * Callers:
 *     UsbhFdoReturnHubName @ 0x1C003EFE8 (UsbhFdoReturnHubName.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall UsbhGetHubPdoName(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rbp
  size_t v13; // r12
  _WORD *v15; // rax
  unsigned int v16; // ebx
  __int16 *v17; // rax
  __int16 v18; // cx
  unsigned int v19; // esi

  v5 = (unsigned int)a4;
  FdoExt(a1, a2, (__int64)a3, a4);
  v12 = PdoExt(a2, v9, v10, v11);
  v13 = (unsigned int)v5;
  Log(a1, 8, 1735290430, (__int64)a3, v5);
  *a5 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( (unsigned int)v5 < 6 )
    return 3221225507LL;
  if ( (v12[353] & 0xC) == 0xC )
  {
    v15 = (_WORD *)*((_QWORD *)v12 + 150);
    v16 = 0;
    if ( *v15 == 92 )
    {
      v17 = v15 + 1;
      v18 = *v17;
      if ( *v17 == 92 )
        goto LABEL_11;
      do
      {
        if ( !v18 )
          break;
        v18 = *++v17;
      }
      while ( *v17 != 92 );
      if ( *v17 == 92 )
LABEL_11:
        LODWORD(v17) = (_DWORD)v17 + 2;
      v16 = (_DWORD)v17 - v12[300];
    }
    v19 = *((unsigned __int16 *)v12 + 596) - v16;
    memset(a3, 0, v13);
    if ( v13 < (unsigned __int64)v19 + 6 )
    {
      *(_DWORD *)a3 = v19 + 6;
      a3[2] = 0;
      *a5 = 6;
    }
    else
    {
      memmove(a3 + 2, (const void *)(*((_QWORD *)v12 + 150) + 2 * ((unsigned __int64)v16 >> 1)), v19);
      *a5 = v19 + 6;
      *(_DWORD *)a3 = v19 + 6;
    }
  }
  else
  {
    *(_DWORD *)a3 = 6;
    a3[2] = 0;
    *a5 = 6;
  }
  Log(a1, 8, 1735290428, (unsigned int)*a5, 0LL);
  return 0LL;
}
