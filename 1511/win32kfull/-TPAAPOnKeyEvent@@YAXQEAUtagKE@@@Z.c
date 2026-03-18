/*
 * XREFs of ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C000BA7C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall TPAAPOnKeyEvent(struct tagKE *const a1)
{
  unsigned int v1; // edx
  __int16 v2; // r8
  bool v4; // r10
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx

  v1 = *((unsigned __int8 *)a1 + 2);
  v2 = *((_WORD *)a1 + 1) & 0x8000;
  v4 = *((_WORD *)a1 + 1) >= 0;
  if ( v1 > 0xA0 )
  {
    v11 = v1 - 161;
    if ( !v11 )
    {
      v9 = 1024;
      goto LABEL_8;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v9 = 64;
      goto LABEL_8;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v9 = 128;
      goto LABEL_8;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v9 = 8;
      goto LABEL_8;
    }
    if ( v14 == 1 )
    {
      v9 = 16;
      goto LABEL_8;
    }
  }
  else
  {
    if ( v1 == 160 )
    {
      v9 = 512;
      goto LABEL_8;
    }
    v5 = v1 - 16;
    if ( !v5 )
    {
      v9 = 256;
      goto LABEL_8;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v9 = 32;
      goto LABEL_8;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v9 = 4;
      goto LABEL_8;
    }
    v8 = v7 - 73;
    if ( !v8 )
    {
      v9 = 1;
LABEL_8:
      if ( v2 )
        v10 = ~v9 & dword_1C0323A90;
      else
        v10 = v9 | dword_1C0323A90;
      dword_1C0323A90 = v10;
      if ( (_BYTE)v10 )
      {
        _InterlockedExchange64(&qword_1C0323A80, 0LL);
        _InterlockedExchange64(&qword_1C0323A88, 0LL);
      }
      return;
    }
    if ( v8 == 1 )
    {
      v9 = 2;
      goto LABEL_8;
    }
  }
  v15 = 0LL;
  if ( !(_BYTE)dword_1C0323A90 && (!v2 || _InterlockedCompareExchange64(&qword_1C0323A80, 0LL, 0LL)) )
  {
    LOBYTE(v15) = *((_BYTE *)a1 + 2);
    if ( (unsigned __int8)(v15 + 23) > 0x14u && (unsigned __int8)(v15 + 96) > 0x17u )
    {
      if ( (unsigned __int8)(v15 - 91) > 0x3Bu
        || (v16 = 0xFE01FFE00000007LL, !_bittest64(&v16, (unsigned int)(v15 - 91))) )
      {
        if ( (unsigned __int8)v15 > 0x2Fu || (v17 = 0xFFFEFFFF00FFLL, !_bittest64(&v17, v15)) )
        {
          if ( (_BYTE)v15 != 0xFF )
            TPAAPOnKeyPress(v4);
        }
      }
    }
  }
}
