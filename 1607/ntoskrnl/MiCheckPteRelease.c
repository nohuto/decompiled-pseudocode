/*
 * XREFs of MiCheckPteRelease @ 0x1401F422C
 * Callers:
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckPteRelease(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int8 i; // cf
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 j; // r9
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  volatile signed __int32 *v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r10
  __int64 result; // rax
  int v18; // r8d
  unsigned __int64 v19; // rcx

  v3 = a1 << 25 >> 16;
  if ( !a2 )
    KeBugCheckEx(0xDAu, 0x300uLL, a1 << 25 >> 16, 0LL, 0LL);
  if ( v3 < qword_140326B30 || v3 >= qword_140326B30 + (qword_140326B20 << 21) )
    KeBugCheckEx(0xDAu, 0x301uLL, a1 << 25 >> 16, 0LL, 0LL);
  v4 = 2LL * (unsigned int)((a1 - qword_1403278C0) >> 3);
  if ( _bittest64((const signed __int64 *)qword_140327508, v4) )
    KeBugCheckEx(0xDAu, 0x303uLL, v3, a2, 0LL);
  LOBYTE(v5) = 2;
  if ( v4 && *(_DWORD *)(qword_140327508 + 4 * ((v4 - 2) >> 5)) >> ((v4 - 2) & 0x1F) == 2 )
    KeBugCheckEx(0xDAu, 0x304uLL, v3, a2, 0LL);
  v6 = v4 + 1;
  for ( i = _bittest64((const signed __int64 *)qword_140327508, v4 + 1);
        i == 1;
        i = _bittest64((const signed __int64 *)qword_140327508, v6) )
  {
    v6 += 2LL;
  }
  BugCheckParameter4 = ((v6 - v4) >> 1) + 1;
  if ( BugCheckParameter4 != a2 )
    KeBugCheckEx(0xDAu, 0x305uLL, v3, a2, BugCheckParameter4);
  v9 = v4 + 2 * BugCheckParameter4;
  for ( j = v4; j < v9; j += 2LL )
  {
    if ( _bittest64((const signed __int64 *)qword_140327508, j) == 1 )
      KeBugCheckEx(0xDAu, 0x306uLL, v3, v3 + (((j - v4) << 11) & 0xFFFFFFFFFFFFF000uLL), BugCheckParameter4);
  }
  v11 = v4 + 2 * (a2 - 1);
  while ( 1 )
  {
    v16 = v4 & 0x1F;
    v14 = (volatile signed __int32 *)(qword_140327508 + 4 * (v4 >> 5));
    if ( v4 >= v11 )
      break;
    LOBYTE(v12) = 1;
    if ( v16 + 1 <= 0x20 )
    {
      v13 = 1 << v16;
LABEL_28:
      _InterlockedOr(v14, v13);
      goto LABEL_29;
    }
    if ( (v4 & 0x1F) == 0 )
      goto LABEL_27;
    _InterlockedOr(v14++, ((1 << (32 - (v4 & 0x1F))) - 1) << v16);
    v12 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
    if ( v12 >= 0x20 )
    {
      v15 = v12 >> 5;
      v12 += -32LL * (v12 >> 5);
      do
      {
        *v14++ = -1;
        --v15;
      }
      while ( v15 );
    }
    if ( v12 )
    {
LABEL_27:
      v13 = (1 << v12) - 1;
      goto LABEL_28;
    }
LABEL_29:
    v4 += 2LL;
  }
  if ( v16 + 2 <= 0x20 )
  {
    result = (unsigned int)(3 << v16);
    goto LABEL_39;
  }
  if ( (v4 & 0x1F) == 0 )
    goto LABEL_38;
  v18 = v4 & 0x1F;
  _InterlockedOr(v14, ((1 << (32 - v18)) - 1) << v16);
  result = (unsigned int)(32 - v18);
  ++v14;
  v5 = 2 - result;
  if ( (unsigned __int64)(2 - result) >= 0x20 )
  {
    v19 = v5 >> 5;
    result = -32LL * (v5 >> 5);
    v5 += result;
    do
    {
      *v14++ = -1;
      --v19;
    }
    while ( v19 );
  }
  if ( v5 )
  {
LABEL_38:
    result = (unsigned int)((1 << v5) - 1);
LABEL_39:
    _InterlockedOr(v14, result);
  }
  return result;
}
