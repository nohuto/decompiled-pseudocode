/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0039300
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C0039928 (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C003998C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  int v6; // r8d
  int v7; // ebp
  int v8; // r11d
  int v9; // r9d
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // r9d
  unsigned int v14; // eax
  int v15; // r9d
  _DWORD *v16; // r8
  int v17; // esi
  int v18; // r15d
  int v19; // ebp
  int v20; // r13d
  int v21; // r11d
  __int64 v22; // rdx
  _DWORD *v23; // r14
  _DWORD *v24; // rcx
  int v25; // ecx
  signed int v26; // r14d
  int v27; // r12d
  int v28; // eax
  __int64 v29; // r10
  char v30; // r11
  __int64 v31; // r10
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int128 v33; // [rsp+30h] [rbp-38h]

  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 5) = 0;
  v6 = *((_DWORD *)a3 + 3);
  v7 = a4;
  *((_DWORD *)this + 4) = v6;
  v8 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 3) = v8;
  v9 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 2) = v9;
  v10 = *(_DWORD *)a3;
  *((_DWORD *)this + 1) = *(_DWORD *)a3;
  *(_DWORD *)this = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)a2 + 20) > 0xA0u
    || v10 < *((_DWORD *)a2 + 22)
    || v9 < *((_DWORD *)a2 + 23)
    || v8 > *((_DWORD *)a2 + 24)
    || v7 == 1
    || v6 > *((_DWORD *)a2 + 25)
    || v9 >= v6
    || v10 >= v8 )
  {
    if ( v10 <= *((_DWORD *)a2 + 22) )
      v10 = *((_DWORD *)a2 + 22);
    *((_DWORD *)this + 1) = v10;
    v11 = *((_DWORD *)a2 + 23);
    if ( v9 > v11 )
      v11 = v9;
    *((_DWORD *)this + 2) = v11;
    v12 = *((_DWORD *)a2 + 24);
    if ( v8 < v12 )
      v12 = v8;
    *((_DWORD *)this + 3) = v12;
    v13 = *((_DWORD *)a2 + 25);
    if ( v6 < v13 )
      v13 = v6;
    *((_DWORD *)this + 4) = v13;
    if ( v11 >= v13 || v10 >= v12 )
    {
      *((_DWORD *)this + 1) = v12;
      return;
    }
    if ( v7 == 1 || *((_DWORD *)a2 + 20) > 0xA0u )
    {
      *((_DWORD *)this + 34) = 0;
      v14 = *((_DWORD *)a2 + 20);
      if ( v14 > 0xD8 )
      {
        *((_BYTE *)this + 21) = 3;
      }
      else if ( v14 > 0xA0 )
      {
        *((_BYTE *)this + 21) = 2;
      }
      v15 = *((_DWORD *)a2 + 21);
      v16 = (_DWORD *)((char *)a2 + 104);
      v17 = v7 != 1;
      v32 = 0LL;
      if ( v15 )
      {
        while ( *((_DWORD *)this + 2) >= v16[2] )
        {
          v16 = (_DWORD *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
          if ( !--v15 )
            goto LABEL_47;
        }
        v18 = HIDWORD(v32);
        v19 = DWORD2(v32);
        v20 = v32;
        do
        {
          --v15;
          if ( v16[1] >= *((_DWORD *)this + 4) )
            break;
          v21 = 0;
          v22 = 0LL;
          if ( *v16 )
          {
            do
            {
              v23 = &v16[(unsigned int)(v22 + 1)];
              if ( v23[3] > *((_DWORD *)this + 1) )
              {
                v24 = &v16[v22];
                if ( v24[3] >= *((_DWORD *)this + 3) )
                  break;
                if ( ++*((_DWORD *)this + 34) >= 0xAu )
                {
                  *((_BYTE *)this + 20) = 3;
                  *((_DWORD *)this + 34) = -1;
                  return;
                }
                v25 = v24[3];
                v26 = v23[3];
                v27 = v16[1];
                v28 = v16[2];
                LODWORD(v33) = v25;
                *(_QWORD *)((char *)&v33 + 4) = __PAIR64__(v26, v27);
                HIDWORD(v33) = v28;
                if ( v20 == v19 || DWORD1(v32) == v18 )
                {
                  v32 = v33;
                  v18 = HIDWORD(v33);
                  v19 = DWORD2(v33);
                  v20 = v33;
                }
                else
                {
                  if ( v25 < v20 )
                    v20 = v25;
                  LODWORD(v32) = v20;
                  if ( v27 < SDWORD1(v32) )
                    DWORD1(v32) = v27;
                  if ( v26 > v19 )
                    v19 = v26;
                  DWORD2(v32) = v19;
                  if ( v28 > v18 )
                  {
                    v18 = v28;
                    HIDWORD(v32) = v28;
                  }
                }
                if ( *((_DWORD *)this + 1) >= v25 && *((_DWORD *)this + 3) <= v26 )
                  v21 = 1;
              }
              v22 = (unsigned int)(v22 + 2);
            }
            while ( (_DWORD)v22 != *v16 );
          }
          v17 &= v21;
          v16 = (_DWORD *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
        }
        while ( v15 );
        v7 = a4;
      }
LABEL_47:
      ERECTL::operator*=((char *)this + 4, &v32);
      if ( v17 )
      {
        if ( !v7 && !(unsigned int)ERECTL::bEqual((ERECTL *)(v29 + 4), a3) )
          *(_BYTE *)(v31 + 20) = 1;
      }
      else
      {
        if ( *(_DWORD *)(v29 + 136) != 1 )
          v30 = 3;
        *(_BYTE *)(v29 + 20) = v30;
      }
    }
    else if ( v7 != 2 )
    {
      *((_BYTE *)this + 20) = 1;
    }
  }
}
