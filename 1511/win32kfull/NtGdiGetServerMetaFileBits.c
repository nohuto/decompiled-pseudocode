/*
 * XREFs of NtGdiGetServerMetaFileBits @ 0x1C02B1F90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtGdiGetServerMetaFileBits(
        __int64 a1,
        __int64 a2,
        volatile void *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  SIZE_T v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx

  v9 = (unsigned int)a2;
  v10 = 0;
  LOBYTE(a2) = 21;
  v11 = HmgLock(a1, a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_DWORD *)(v11 + 24);
    if ( v13 == 1599096397 || v13 == 1480934989 )
    {
      v10 = *(_DWORD *)(v12 + 40);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == v10 )
        {
          v14 = a6;
          if ( (unsigned __int64)a6 >= W32UserProbeAddress )
            v14 = (_DWORD *)W32UserProbeAddress;
          *v14 = *(_DWORD *)(v12 + 32);
          v15 = a7;
          if ( (unsigned __int64)a7 >= W32UserProbeAddress )
            v15 = (_DWORD *)W32UserProbeAddress;
          *v15 = *(_DWORD *)(v12 + 36);
          if ( (unsigned __int64)a4 >= W32UserProbeAddress )
            a4 = (_DWORD *)W32UserProbeAddress;
          *a4 = *(_DWORD *)(v12 + 24);
          v16 = a5;
          if ( (unsigned __int64)a5 >= W32UserProbeAddress )
            v16 = (_DWORD *)W32UserProbeAddress;
          *v16 = *(_DWORD *)(v12 + 28);
          ProbeForWrite(a3, v9, 4u);
          memmove((void *)a3, (const void *)(v12 + 44), *(unsigned int *)(v12 + 40));
        }
        else
        {
          v10 = 0;
        }
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
  }
  return v10;
}
