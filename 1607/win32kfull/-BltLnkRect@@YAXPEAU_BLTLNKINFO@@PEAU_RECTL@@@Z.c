/*
 * XREFs of ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C003C68C
 * Callers:
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0066D34 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?BltLnkAccel6666@@YAXPEAE0JJJJ@Z @ 0x1C02D6208 (-BltLnkAccel6666@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YAXPEAE0JJJJ@Z @ 0x1C02D62A0 (-BltLnkAccel8888@@YAXPEAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z @ 0x1C02D6340 (-BltLnkAccelEEEE@@YAXPEAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(struct _BLTLNKINFO *a1, struct _RECTL *a2)
{
  LONG right; // r13d
  __int64 v4; // r15
  LONG bottom; // r12d
  LONG top; // esi
  int v7; // r9d
  LONG left; // edx
  int v9; // r13d
  __int64 v10; // r10
  int v11; // r14d
  int v12; // edx
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // r8
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // esi
  __int64 v21; // rdx
  char v22; // r8
  int v23; // r10d
  unsigned int v25; // eax
  int v26; // r10d
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // ecx
  _DWORD *v32; // r11
  int v33; // eax
  unsigned int n; // ecx
  char *v35; // rcx
  int m; // edx
  unsigned int k; // ecx
  char *v38; // rcx
  int j; // r8d
  unsigned int v42; // r9d
  __int64 v43; // r8
  unsigned int v44; // r8d
  __int64 v45; // rdx
  char *v46; // rcx
  int i; // edx
  unsigned int v48; // r9d
  __int64 v49; // r8
  int v50; // [rsp+40h] [rbp-658h]
  int v51; // [rsp+44h] [rbp-654h]
  int v52; // [rsp+48h] [rbp-650h]
  int v53; // [rsp+48h] [rbp-650h]
  int v54; // [rsp+48h] [rbp-650h]
  int v55; // [rsp+48h] [rbp-650h]
  unsigned int v56; // [rsp+4Ch] [rbp-64Ch]
  int v57; // [rsp+50h] [rbp-648h]
  int v58; // [rsp+54h] [rbp-644h]
  int v59; // [rsp+54h] [rbp-644h]
  __int64 v61; // [rsp+B8h] [rbp-5E0h]
  unsigned int v62; // [rsp+C0h] [rbp-5D8h]
  __int64 v63; // [rsp+C8h] [rbp-5D0h]
  __int64 v64; // [rsp+D8h] [rbp-5C0h]
  __int64 v65; // [rsp+1C8h] [rbp-4D0h]
  _DWORD v66[256]; // [rsp+260h] [rbp-438h] BYREF

  right = a2->right;
  v61 = 0LL;
  v4 = 0LL;
  v62 = 0;
  bottom = a2->bottom;
  top = a2->top;
  v7 = bottom - top;
  left = a2->left;
  v9 = right - left;
  v63 = *((_QWORD *)a1 + 2);
  switch ( *(_DWORD *)(v63 + 96) )
  {
    case 1:
      v25 = ((left & 0x1Fu) + v9 + 31) >> 5;
LABEL_43:
      v56 = v25;
      break;
    case 2:
      v25 = ((left & 7u) + v9 + 7) >> 3;
      goto LABEL_43;
    case 3:
      v25 = ((left & 3u) + v9 + 3) >> 2;
      goto LABEL_43;
    case 4:
      v25 = ((left & 1u) + v9 + 1) >> 1;
      goto LABEL_43;
    case 5:
      v62 = -left & 3;
      v56 = (v62 + 2 * (v9 + 1) + v9 + 1) >> 2;
      break;
    case 6:
      v56 = v9;
      break;
  }
  v10 = *((_QWORD *)a1 + 13);
  if ( v10 )
  {
    v33 = *((_DWORD *)a1 + 40);
    v57 = v33;
    v11 = top - *((_DWORD *)a1 + 42);
    if ( *((int *)a1 + 19) < 0 )
      v11 = v7 + v11 - 1;
    if ( v11 < v33 )
    {
      if ( v11 < 0 )
        v11 = v33 - (-1 - v11) % v33 - 1;
    }
    else
    {
      v11 %= v33;
    }
    v4 = v10 + v11 * *((_DWORD *)a1 + 30);
  }
  else
  {
    v57 = *((_DWORD *)a1 + 38);
    v11 = v51;
  }
  v12 = *((_DWORD *)a1 + 19);
  v58 = v12;
  if ( v12 <= 0 )
    v13 = (bottom - 1) * *((_DWORD *)a1 + 29);
  else
    v13 = top * *((_DWORD *)a1 + 29);
  v14 = *((_QWORD *)a1 + 11) + v13;
  v15 = *((_QWORD *)a1 + 10);
  if ( v15 )
  {
    v16 = top + *((_DWORD *)a1 + 37) - *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 52) = v16;
    v17 = a2->left + *((_DWORD *)a1 + 36) - *(_DWORD *)a1;
    *((_DWORD *)a1 + 49) = v17;
    *((_DWORD *)a1 + 50) = v17 + v9;
    if ( v58 <= 0 )
      v18 = *((_DWORD *)a1 + 28) * (v7 + v16 - 1);
    else
      v18 = v16 * *((_DWORD *)a1 + 28);
    v12 = v58;
    v61 = v18 + v15;
  }
  v19 = *((_DWORD *)a1 + 58);
  v52 = v19;
  if ( v19 )
  {
    v20 = a2->top + *((_DWORD *)a1 + 46) - *((_DWORD *)a1 + 1);
    if ( v12 < 0 )
      v20 = v7 + v20 - 1;
    v26 = *((_DWORD *)a1 + 44);
    if ( v20 >= v26 )
    {
      v20 %= v26;
    }
    else if ( v20 < 0 )
    {
      v20 = v26 - (-1 - v20) % v26 - 1;
    }
    v64 = *((_QWORD *)a1 + 12) + v20 * *((_DWORD *)a1 + 31);
    v21 = v63;
  }
  else
  {
    v20 = v50;
    v21 = v63;
  }
  if ( *((int *)a1 + 18) > 0 && v58 > 0 )
  {
    v22 = *((_BYTE *)a1 + 64);
    if ( v22 == -52
      && v19
      && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == *(_DWORD *)(v21 + 96)
      && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
    {
      _guard_dispatch_icall_fptr();
      return;
    }
    if ( v22 != -72 && v22 != -30 )
      goto LABEL_23;
    if ( !v19 )
    {
      if ( *((_DWORD *)a1 + 38) != -1 && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == 1 )
      {
        v27 = *(_DWORD *)(v21 + 96);
        if ( v27 >= 3 && v27 <= 6 )
        {
          v28 = v27 - 3;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
                v31 = v30 == 1 ? 0xFFFFFF : *((_DWORD *)a1 + 38);
              else
                v31 = 0xFFFFFF;
            }
            else
            {
              v31 = 0xFFFF;
            }
          }
          else
          {
            v31 = 255;
          }
          v32 = *(_DWORD **)(*((_QWORD *)a1 + 6) + 16LL);
          if ( (v31 & v32[1]) == v31 && (v31 & *v32) == 0 )
          {
            _guard_dispatch_icall_fptr();
            return;
          }
        }
      }
LABEL_23:
      if ( !v52
        && *((_DWORD *)a1 + 55)
        && *((_DWORD *)a1 + 56)
        && *(_DWORD *)(v63 + 96) == 3
        && *(_DWORD *)(*((_QWORD *)a1 + 3) + 96LL) == 3
        && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 4LL) & 1) != 0 )
      {
        switch ( v22 )
        {
          case 102:
            BltLnkAccel6666(
              (unsigned __int8 *)(v61 + *((int *)a1 + 49)),
              (unsigned __int8 *)(v14 + a2->left),
              *((_DWORD *)a1 + 32),
              *((_DWORD *)a1 + 33),
              v9,
              v7);
            return;
          case -120:
            BltLnkAccel8888(
              (unsigned __int8 *)(v61 + *((int *)a1 + 49)),
              (unsigned __int8 *)(v14 + a2->left),
              *((_DWORD *)a1 + 32),
              *((_DWORD *)a1 + 33),
              v9,
              v7);
            return;
          case -18:
            BltLnkAccelEEEE(
              (unsigned __int8 *)(v61 + *((int *)a1 + 49)),
              (unsigned __int8 *)(v14 + a2->left),
              *((_DWORD *)a1 + 32),
              *((_DWORD *)a1 + 33),
              v9,
              v7);
            return;
        }
      }
    }
  }
  v23 = *((_DWORD *)a1 + 55);
  if ( v23 )
    v65 = v61;
  if ( *((_DWORD *)a1 + 57) )
  {
    if ( *((_DWORD *)a1 + 56) )
    {
      if ( v23 )
      {
        v55 = v7;
        while ( v55-- )
        {
          _guard_dispatch_icall_fptr();
          v65 += *((int *)a1 + 32);
          _guard_dispatch_icall_fptr();
          _guard_dispatch_icall_fptr();
          if ( v4 )
          {
            _guard_dispatch_icall_fptr();
            if ( *((_DWORD *)a1 + 19) == 1 )
            {
              ++v11;
              v4 += *((int *)a1 + 34);
              if ( v11 >= v57 )
              {
                v11 = 0;
                v4 = *((_QWORD *)a1 + 13);
              }
            }
            else if ( v11 )
            {
              --v11;
              v4 -= *((int *)a1 + 30);
            }
            else
            {
              v11 = v57 - 1;
              v4 = *((_QWORD *)a1 + 13) + (v57 - 1) * *((_DWORD *)a1 + 30);
            }
            v42 = v56;
            v43 = 0LL;
            while ( v42 )
            {
              v66[v43 + 128] = v66[v43] & v66[v43 + 64] | ~v66[v43] & v66[v43 + 192];
              ++v43;
              --v42;
            }
          }
          else if ( *(_DWORD *)(*((_QWORD *)a1 + 2) + 96LL) == 5 )
          {
            v46 = (char *)v66 + v62;
            for ( i = v9; i; --i )
            {
              *(_WORD *)v46 = v57;
              v46[2] = BYTE2(v57);
              v46 += 3;
            }
            v48 = v56;
            v49 = 0LL;
            while ( v48 )
            {
              v66[v49 + 128] = v66[v49] & v66[v49 + 64] | ~v66[v49] & v66[v49 + 192];
              ++v49;
              --v48;
            }
          }
          else
          {
            v44 = v56;
            v45 = 0LL;
            while ( v44 )
            {
              v66[v45 + 128] = v57 & v66[v45 + 64] | ~v57 & v66[v45 + 192];
              ++v45;
              --v44;
            }
          }
          if ( *((_DWORD *)a1 + 58) )
          {
            _guard_dispatch_icall_fptr();
            if ( *((int *)a1 + 19) <= 0 )
            {
              if ( v20 )
              {
                --v20;
                v64 += *((int *)a1 + 35);
              }
              else
              {
                v20 = *((_DWORD *)a1 + 44) - 1;
                v64 = *((_QWORD *)a1 + 12) + v20 * *((_DWORD *)a1 + 31);
              }
            }
            else
            {
              ++v20;
              v64 += *((int *)a1 + 35);
              if ( v20 >= *((_DWORD *)a1 + 44) )
              {
                v20 = 0;
                v64 = *((_QWORD *)a1 + 12);
              }
            }
          }
          else
          {
            _guard_dispatch_icall_fptr();
          }
          v14 += *((int *)a1 + 33);
        }
      }
      else
      {
        if ( !v4 )
        {
          if ( *(_DWORD *)(v63 + 96) == 5 )
          {
            v38 = (char *)&v66[64] + v62;
            for ( j = v9; j; --j )
            {
              *(_WORD *)v38 = v57;
              v38[2] = BYTE2(v57);
              v38 += 3;
            }
          }
          else
          {
            for ( k = v56; k; v66[k + 64] = v57 )
              --k;
          }
        }
        v54 = v7;
        while ( v54-- )
        {
          if ( *((_DWORD *)a1 + 57) && v4 )
          {
            _guard_dispatch_icall_fptr();
            if ( *((_DWORD *)a1 + 19) == 1 )
            {
              ++v11;
              v4 += *((int *)a1 + 34);
              if ( v11 >= v57 )
              {
                v11 = 0;
                v4 = *((_QWORD *)a1 + 13);
              }
            }
            else if ( v11 )
            {
              --v11;
              v4 -= *((int *)a1 + 30);
            }
            else
            {
              v11 = v57 - 1;
              v4 = *((_QWORD *)a1 + 13) + (v57 - 1) * *((_DWORD *)a1 + 30);
            }
          }
          _guard_dispatch_icall_fptr();
          if ( *((_DWORD *)a1 + 58) )
          {
            _guard_dispatch_icall_fptr();
            if ( *((int *)a1 + 19) <= 0 )
            {
              if ( v20 )
              {
                --v20;
                v64 += *((int *)a1 + 35);
              }
              else
              {
                v20 = *((_DWORD *)a1 + 44) - 1;
                v64 = *((_QWORD *)a1 + 12) + v20 * *((_DWORD *)a1 + 31);
              }
            }
            else
            {
              ++v20;
              v64 += *((int *)a1 + 35);
              if ( v20 >= *((_DWORD *)a1 + 44) )
              {
                v20 = 0;
                v64 = *((_QWORD *)a1 + 12);
              }
            }
          }
          else
          {
            _guard_dispatch_icall_fptr();
          }
          v14 += *((int *)a1 + 33);
        }
      }
    }
    else
    {
      if ( !v4 )
      {
        if ( *(_DWORD *)(v63 + 96) == 5 )
        {
          v35 = (char *)&v66[64] + v62;
          for ( m = v9; m; --m )
          {
            *(_WORD *)v35 = v57;
            v35[2] = BYTE2(v57);
            v35 += 3;
          }
        }
        else
        {
          for ( n = v56; n; v66[n + 64] = v57 )
            --n;
        }
      }
      while ( 1 )
      {
        v59 = v7 - 1;
        if ( !v7 )
          break;
        if ( *((_DWORD *)a1 + 55) )
        {
          _guard_dispatch_icall_fptr();
          v65 += *((int *)a1 + 32);
        }
        if ( v4 )
        {
          _guard_dispatch_icall_fptr();
          if ( *((_DWORD *)a1 + 19) == 1 )
          {
            ++v11;
            v4 += *((int *)a1 + 34);
            if ( v11 >= v57 )
            {
              v11 = 0;
              v4 = *((_QWORD *)a1 + 13);
            }
          }
          else if ( v11 )
          {
            --v11;
            v4 -= *((int *)a1 + 30);
          }
          else
          {
            v11 = v57 - 1;
            v4 = *((_QWORD *)a1 + 13) + (v57 - 1) * *((_DWORD *)a1 + 30);
          }
        }
        _guard_dispatch_icall_fptr();
        if ( *((_DWORD *)a1 + 58) )
        {
          _guard_dispatch_icall_fptr();
          if ( *((int *)a1 + 19) <= 0 )
          {
            if ( v20 )
            {
              --v20;
              v64 += *((int *)a1 + 35);
            }
            else
            {
              v20 = *((_DWORD *)a1 + 44) - 1;
              v64 = *((_QWORD *)a1 + 12) + v20 * *((_DWORD *)a1 + 31);
            }
          }
          else
          {
            ++v20;
            v64 += *((int *)a1 + 35);
            if ( v20 >= *((_DWORD *)a1 + 44) )
            {
              v20 = 0;
              v64 = *((_QWORD *)a1 + 12);
            }
          }
        }
        else
        {
          _guard_dispatch_icall_fptr();
        }
        v14 += *((int *)a1 + 33);
        v7 = v59;
      }
    }
  }
  else
  {
    v53 = v7;
    while ( v53-- )
    {
      if ( *((_DWORD *)a1 + 55) )
      {
        _guard_dispatch_icall_fptr();
        v65 += *((int *)a1 + 32);
      }
      _guard_dispatch_icall_fptr();
      if ( *((_DWORD *)a1 + 58) )
      {
        _guard_dispatch_icall_fptr();
        if ( *((int *)a1 + 19) <= 0 )
        {
          if ( v20 )
          {
            --v20;
            v64 += *((int *)a1 + 35);
          }
          else
          {
            v20 = *((_DWORD *)a1 + 44) - 1;
            v64 = *((_QWORD *)a1 + 12) + v20 * *((_DWORD *)a1 + 31);
          }
        }
        else
        {
          ++v20;
          v64 += *((int *)a1 + 35);
          if ( v20 >= *((_DWORD *)a1 + 44) )
          {
            v20 = 0;
            v64 = *((_QWORD *)a1 + 12);
          }
        }
      }
      else
      {
        _guard_dispatch_icall_fptr();
      }
      v14 += *((int *)a1 + 33);
    }
  }
}
