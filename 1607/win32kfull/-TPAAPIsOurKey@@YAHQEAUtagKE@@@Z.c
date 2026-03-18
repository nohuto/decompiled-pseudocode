/*
 * XREFs of ?TPAAPIsOurKey@@YAHQEAUtagKE@@@Z @ 0x1C0151118
 * Callers:
 *     ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C01301F0 (-TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TPAAPIsOurKey(struct tagKE *const a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  result = 0;
  if ( !(_BYTE)dword_1C0329120
    && (*((__int16 *)a1 + 1) >= 0 || _InterlockedCompareExchange64(&qword_1C0329110, 0LL, 0LL)) )
  {
    LOBYTE(a1) = *((_BYTE *)a1 + 2);
    if ( (unsigned __int8)a1 > 0x2Fu || (v2 = 0xFFFEFFFF00FFLL, !_bittest64(&v2, (unsigned __int8)a1)) )
    {
      if ( (unsigned __int8)((_BYTE)a1 + 96) > 0x17u )
      {
        if ( (unsigned __int8)((_BYTE)a1 - 91) > 0x3Bu
          || (v3 = 0xFE01FFE00000007LL, !_bittest64(&v3, (unsigned int)((_DWORD)a1 - 91))) )
        {
          if ( (unsigned __int8)((_BYTE)a1 + 23) > 0x14u && (_BYTE)a1 != 0xFF )
            return 1;
        }
      }
    }
  }
  return result;
}
