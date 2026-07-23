/*
 * XREFs of SmHpBufferUpdateFullness @ 0x1401186C8
 * Callers:
 *     SmHpBufferAlloc @ 0x140115ECC (SmHpBufferAlloc.c)
 *     SmHpChunkFree @ 0x140117B64 (SmHpChunkFree.c)
 *     SmHpChunkAlloc @ 0x140118638 (SmHpChunkAlloc.c)
 *     SmHpBufferCleanup @ 0x14021FB90 (SmHpBufferCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmHpBufferUpdateFullness(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int16 v3; // ax
  int v4; // r9d
  int v6; // r11d
  __int64 result; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx

  v3 = *(_WORD *)(a2 + 10);
  v4 = -1;
  if ( v3 )
    v6 = v3 >> *(_BYTE *)(a1 + 552);
  else
    v6 = -1;
  *(_WORD *)(a2 + 10) = a3 + v3;
  *(_DWORD *)(a1 + 560) += a3;
  result = *(unsigned __int16 *)(a2 + 10);
  if ( (_WORD)result )
    v4 = (unsigned __int16)result >> *(_BYTE *)(a1 + 552);
  if ( v6 != v4 )
  {
    v8 = *(_QWORD **)a2;
    if ( v6 >= 0 )
    {
      v9 = *v8;
      v10 = (_QWORD *)v8[1];
      result = a1 + 16 * (v6 + 18LL);
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      if ( *(_QWORD *)result == result )
      {
        result = (unsigned int)(1 << v6);
        *(_DWORD *)(a1 + 284) ^= result;
      }
    }
    if ( v4 < 0 )
    {
      v8[1] = v8;
      *v8 = v8;
    }
    else
    {
      result = a1 + 16 * (v4 + 18LL);
      if ( *(_QWORD *)result == result )
        *(_DWORD *)(a1 + 284) ^= 1 << v4;
      v11 = *(_QWORD **)(result + 8);
      if ( *v11 != result )
        __fastfail(3u);
      *v8 = result;
      v8[1] = v11;
      *v11 = v8;
      *(_QWORD *)(result + 8) = v8;
    }
  }
  return result;
}
