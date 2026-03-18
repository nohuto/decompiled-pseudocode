/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0020CD0
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C007C780 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C002DC30 (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  int v6; // edi
  int v7; // r11d
  int v8; // r9d
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // eax
  int v12; // r11d
  _DWORD *v13; // r9
  int v14; // esi
  char v15; // di
  int v16; // r13d
  int v17; // r15d
  int v18; // r12d
  int v19; // ebp
  __int64 v20; // rdx
  _DWORD *v21; // rdi
  _DWORD *v22; // rcx
  int v23; // esi
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  __int64 v28; // r10
  int v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+88h] [rbp+10h]

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
    if ( v9 <= *((_DWORD *)a2 + 22) )
      v9 = *((_DWORD *)a2 + 22);
    *((_DWORD *)this + 1) = v9;
    if ( v8 <= *((_DWORD *)a2 + 23) )
      v8 = *((_DWORD *)a2 + 23);
    *((_DWORD *)this + 2) = v8;
    v10 = *((_DWORD *)a2 + 24);
    if ( v7 < v10 )
      v10 = v7;
    *((_DWORD *)this + 3) = v10;
    if ( v6 >= *((_DWORD *)a2 + 25) )
      v6 = *((_DWORD *)a2 + 25);
    *((_DWORD *)this + 4) = v6;
    if ( v9 >= v10 || v8 >= v6 )
    {
      *((_DWORD *)this + 1) = v10;
    }
    else if ( a4 == 1 || *((_DWORD *)a2 + 20) > 0xA0u )
    {
      *((_DWORD *)this + 34) = 0;
      v11 = *((_DWORD *)a2 + 20);
      if ( v11 > 0xD8 )
      {
        *((_BYTE *)this + 21) = 3;
      }
      else if ( v11 > 0xA0 )
      {
        *((_BYTE *)this + 21) = 2;
      }
      v12 = *((_DWORD *)a2 + 21);
      v13 = (_DWORD *)((char *)a2 + 104);
      v14 = a4 != 1;
      v30 = v14;
      v15 = 1;
      if ( v12 )
      {
        while ( *((_DWORD *)this + 2) >= v13[2] )
        {
          v13 = (_DWORD *)((char *)v13 + (unsigned int)(4 * *v13 + 16));
          if ( !--v12 )
            goto LABEL_79;
        }
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v29 = 0;
        do
        {
          --v12;
          if ( v13[1] >= *((_DWORD *)this + 4) )
            break;
          v19 = 0;
          v20 = 0LL;
          if ( *v13 )
          {
            while ( 1 )
            {
              v21 = &v13[(unsigned int)(v20 + 1)];
              if ( v21[3] > *((_DWORD *)this + 1) )
              {
                v22 = &v13[v20];
                if ( v22[3] >= *((_DWORD *)this + 3) )
                  goto LABEL_42;
                if ( ++*((_DWORD *)this + 34) >= 0xAu )
                {
                  *((_BYTE *)this + 20) = 3;
                  *((_DWORD *)this + 34) = -1;
                  return;
                }
                v23 = v22[3];
                v24 = v21[3];
                if ( v18 == v17 || v29 == v16 )
                {
                  v16 = v13[2];
                  v17 = v21[3];
                  v18 = v23;
                  v29 = v13[1];
                }
                else
                {
                  if ( v23 < v18 )
                    v18 = v23;
                  if ( v13[1] < v29 )
                    v29 = v13[1];
                  if ( v24 > v17 )
                    v17 = v21[3];
                  if ( v13[2] > v16 )
                    v16 = v13[2];
                }
                if ( *((_DWORD *)this + 1) >= v23 && *((_DWORD *)this + 3) <= v24 )
                  v19 = 1;
              }
              v20 = (unsigned int)(v20 + 2);
              if ( (_DWORD)v20 == *v13 )
              {
LABEL_42:
                v14 = v30;
                break;
              }
            }
          }
          v14 &= v19;
          v30 = v14;
          v13 = (_DWORD *)((char *)v13 + (unsigned int)(4 * *v13 + 16));
        }
        while ( v12 );
        v25 = v29;
        v15 = 1;
      }
      else
      {
LABEL_79:
        v16 = 0;
        v17 = 0;
        v25 = 0;
        v18 = 0;
      }
      if ( v18 > *((_DWORD *)this + 1) )
        *((_DWORD *)this + 1) = v18;
      if ( v25 > *((_DWORD *)this + 2) )
        *((_DWORD *)this + 2) = v25;
      if ( v17 < *((_DWORD *)this + 3) )
        *((_DWORD *)this + 3) = v17;
      if ( v16 < *((_DWORD *)this + 4) )
        *((_DWORD *)this + 4) = v16;
      v26 = *((_DWORD *)this + 3);
      if ( v26 < *((_DWORD *)this + 1) )
      {
        *((_DWORD *)this + 1) = v26;
      }
      else
      {
        v27 = *((_DWORD *)this + 4);
        if ( v27 < *((_DWORD *)this + 2) )
          *((_DWORD *)this + 2) = v27;
      }
      if ( v14 )
      {
        if ( !a4 && !(unsigned int)ERECTL::bEqual((XCLIPOBJ *)((char *)this + 4), a3) )
          *(_BYTE *)(v28 + 20) = 1;
      }
      else
      {
        if ( *((_DWORD *)this + 34) != 1 )
          v15 = 3;
        *((_BYTE *)this + 20) = v15;
      }
    }
    else if ( a4 != 2 )
    {
      *((_BYTE *)this + 20) = 1;
    }
  }
}
