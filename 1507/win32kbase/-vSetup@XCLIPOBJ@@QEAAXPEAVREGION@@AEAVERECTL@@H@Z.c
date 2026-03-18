/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0032420
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C000C1B4 (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00AF674 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  int v6; // ebx
  int v7; // r11d
  int v8; // r9d
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // r9d
  unsigned int v14; // eax
  int v15; // ebx
  _DWORD *v16; // r9
  int v17; // ebp
  int v18; // r15d
  int v19; // r11d
  int v20; // esi
  int v21; // r13d
  __int64 v22; // rdx
  _DWORD *v23; // r14
  _DWORD *v24; // rcx
  signed int v25; // eax
  signed int v26; // ebp
  int v27; // r14d
  signed int v28; // ecx
  struct ERECTL *v29; // r8
  __int64 v30; // r10
  char v31; // r11
  char v32; // al
  __int64 v33; // r10
  __int128 v34; // [rsp+20h] [rbp-48h] BYREF
  __int128 v35; // [rsp+30h] [rbp-38h]
  int v36; // [rsp+70h] [rbp+8h]

  *((_QWORD *)this + 7) = a2;
  *((_DWORD *)this + 5) = 0;
  v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 4) = v6;
  v7 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 3) = v7;
  v8 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 2) = v8;
  v9 = *(_DWORD *)a3;
  *((_DWORD *)this + 1) = *(_DWORD *)a3;
  *(_DWORD *)this = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)a2 + 20) > 0xA0u
    || v9 < *((_DWORD *)a2 + 22)
    || v8 < *((_DWORD *)a2 + 23)
    || v7 > *((_DWORD *)a2 + 24)
    || a4 == 1
    || v6 > *((_DWORD *)a2 + 25)
    || v8 >= v6
    || v9 >= v7 )
  {
    v10 = *((_DWORD *)a2 + 22);
    if ( v9 > v10 )
      v10 = v9;
    *((_DWORD *)this + 1) = v10;
    v11 = *((_DWORD *)a2 + 23);
    if ( v8 > v11 )
      v11 = v8;
    *((_DWORD *)this + 2) = v11;
    v12 = *((_DWORD *)a2 + 24);
    if ( v7 < v12 )
      v12 = v7;
    *((_DWORD *)this + 3) = v12;
    v13 = *((_DWORD *)a2 + 25);
    if ( v6 < v13 )
      v13 = v6;
    *((_DWORD *)this + 4) = v13;
    if ( v10 >= v12 || v11 >= v13 )
    {
      *((_DWORD *)this + 1) = v12;
    }
    else if ( *((_DWORD *)a2 + 20) > 0xA0u || a4 == 1 )
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
      v17 = a4 != 1;
      v34 = 0LL;
      v36 = v17;
      if ( v15 )
      {
        while ( *((_DWORD *)this + 2) >= v16[2] )
        {
          v16 = (_DWORD *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
          if ( !--v15 )
            goto LABEL_52;
        }
        v18 = HIDWORD(v34);
        v19 = DWORD2(v34);
        v20 = v34;
        do
        {
          --v15;
          if ( v16[1] >= *((_DWORD *)this + 4) )
            break;
          v21 = 0;
          v22 = 0LL;
          if ( *v16 )
          {
            while ( 1 )
            {
              v23 = &v16[(unsigned int)(v22 + 1)];
              if ( v23[3] > *((_DWORD *)this + 1) )
              {
                v24 = &v16[v22];
                if ( v24[3] >= *((_DWORD *)this + 3) )
                  goto LABEL_50;
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
                *(_QWORD *)&v35 = __PAIR64__(v27, v25);
                *((_QWORD *)&v35 + 1) = __PAIR64__(v28, v26);
                if ( v20 == v19 || DWORD1(v34) == v18 )
                {
                  v34 = v35;
                  v18 = HIDWORD(v35);
                  v19 = DWORD2(v35);
                  v20 = v35;
                }
                else
                {
                  if ( v25 < v20 )
                    v20 = v25;
                  LODWORD(v34) = v20;
                  if ( v27 < SDWORD1(v34) )
                    DWORD1(v34) = v27;
                  if ( v26 > v19 )
                    v19 = v26;
                  DWORD2(v34) = v19;
                  if ( v28 > v18 )
                  {
                    v18 = v28;
                    HIDWORD(v34) = v28;
                  }
                }
                if ( *((_DWORD *)this + 1) >= v25 && *((_DWORD *)this + 3) <= v26 )
                  v21 = 1;
              }
              v22 = (unsigned int)(v22 + 2);
              if ( (_DWORD)v22 == *v16 )
              {
LABEL_50:
                v17 = v36;
                break;
              }
            }
          }
          v17 &= v21;
          v36 = v17;
          v16 = (_DWORD *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
        }
        while ( v15 );
      }
LABEL_52:
      ERECTL::operator*=((char *)this + 4, &v34, a3, v16);
      if ( v17 )
      {
        if ( !a4 && !ERECTL::bEqual((ERECTL *)(v30 + 4), v29) )
          *(_BYTE *)(v33 + 20) = 1;
      }
      else
      {
        v32 = 3;
        if ( *(_DWORD *)(v30 + 136) == 1 )
          v32 = v31;
        *(_BYTE *)(v30 + 20) = v32;
      }
    }
    else if ( a4 != 2 )
    {
      *((_BYTE *)this + 20) = 1;
    }
  }
}
