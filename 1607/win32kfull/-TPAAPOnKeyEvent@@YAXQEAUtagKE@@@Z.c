/*
 * XREFs of ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C01301F0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 * Callees:
 *     ?TPAAPIsOurKey@@YAHQEAUtagKE@@@Z @ 0x1C0151118 (-TPAAPIsOurKey@@YAHQEAUtagKE@@@Z.c)
 */

void __fastcall TPAAPOnKeyEvent(struct tagKE *const a1)
{
  int v1; // r8d
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned __int8 v7; // r9
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx

  v1 = 1;
  v2 = *((unsigned __int8 *)a1 + 2);
  if ( v2 > 0xA0 )
  {
    v8 = v2 - 161;
    if ( v8 )
    {
      v10 = v8 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
            {
LABEL_8:
              if ( (unsigned int)TPAAPIsOurKey(a1) )
                TPAAPOnKeyPress(v7);
              return;
            }
            v1 = 16;
          }
          else
          {
            v1 = 8;
          }
        }
        else
        {
          v1 = 128;
        }
      }
      else
      {
        v1 = 64;
      }
    }
    else
    {
      v1 = 1024;
    }
  }
  else if ( v2 == 160 )
  {
    v1 = 512;
  }
  else
  {
    v3 = v2 - 16;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 73;
          if ( v6 )
          {
            if ( v6 != 1 )
              goto LABEL_8;
            v1 = 2;
          }
        }
        else
        {
          v1 = 4;
        }
      }
      else
      {
        v1 = 32;
      }
    }
    else
    {
      v1 = 256;
    }
  }
  if ( *((__int16 *)a1 + 1) < 0 )
    v9 = ~v1 & dword_1C0329120;
  else
    v9 = v1 | dword_1C0329120;
  dword_1C0329120 = v9;
  if ( (_BYTE)v9 )
  {
    _InterlockedExchange64(&qword_1C0329110, 0LL);
    _InterlockedExchange64(&qword_1C0329118, 0LL);
  }
}
