/*
 * XREFs of GetPrintableOperandValue @ 0x1406CD9D4
 * Callers:
 *     GetPrintableOperandValue @ 0x1406CD9D4 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1406CB950 (LocalGetStringForSid.c)
 *     SddlpReAlloc @ 0x1406CC528 (SddlpReAlloc.c)
 *     GetPrintableOperandValue @ 0x1406CD9D4 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1406D03A0 (ULongAddStringSize.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        char *a1,
        int a2,
        wchar_t **a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int PrintableOperandValue; // edi
  unsigned __int8 v11; // al
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  wchar_t *v16; // rax
  unsigned int v17; // ecx
  wchar_t *v18; // rax
  wchar_t **v19; // rdx
  unsigned int v20; // r8d
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // rcx
  char *v24; // rcx
  SIZE_T v25; // rdx
  wchar_t *v26; // r8
  __int64 v27; // rcx
  wchar_t *v28; // r8
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbx
  wchar_t *v35; // rax
  unsigned int v36; // r9d
  char *v37; // rdi
  __int64 v38; // r10
  __int64 v39; // rbx
  __int64 v40; // r11
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned int v43; // ecx
  wchar_t *v44; // rcx
  unsigned __int64 v45; // rbx
  char v46; // dl
  wchar_t *v47; // rbx
  __int16 v48; // ax
  const wchar_t *v49; // r8
  __int64 v50; // r8
  int v52; // [rsp+20h] [rbp-E0h]
  char v53; // [rsp+40h] [rbp-C0h]
  char v54; // [rsp+41h] [rbp-BFh]
  unsigned int Size; // [rsp+44h] [rbp-BCh]
  unsigned int Sizea; // [rsp+44h] [rbp-BCh]
  unsigned int Sizeb; // [rsp+44h] [rbp-BCh]
  unsigned int Sizec; // [rsp+44h] [rbp-BCh]
  unsigned int v60; // [rsp+50h] [rbp-B0h]
  wchar_t *v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-9Ch]
  unsigned int v64; // [rsp+68h] [rbp-98h]
  __int64 i; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h]
  char *v67; // [rsp+80h] [rbp-80h]
  int v68[2]; // [rsp+88h] [rbp-78h]
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  wchar_t pszDest[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid1[80]; // [rsp+B0h] [rbp-50h] BYREF

  v67 = a1;
  PrintableOperandValue = 0;
  *(_QWORD *)v68 = a5;
  v70 = a6;
  v69 = a7;
  v61 = 0LL;
  v62 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v11 = *a1;
    if ( !*a1 )
    {
LABEL_81:
      PrintableOperandValue = 1336;
      goto LABEL_82;
    }
    if ( v11 > 4u )
    {
      switch ( v11 )
      {
        case 0x10u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v43 = *(_DWORD *)(a1 + 1);
          Sizec = v43;
          *a4 = 5;
          if ( a2 - 5 < v43 )
            return 1336;
          if ( v43 + 6 >= v43 )
          {
            v44 = (wchar_t *)SddlpAlloc(v43 + 6);
            *a3 = v44;
            if ( v44 )
            {
              *v44 = 34;
              memmove(*a3 + 1, &v67[*a4], Sizec);
              v45 = (unsigned __int64)Sizec >> 1;
              (*a3)[v45 + 1] = 34;
              (*a3)[v45 + 2] = 0;
              *a4 += Sizec;
              goto LABEL_82;
            }
            goto LABEL_62;
          }
          break;
        case 0x18u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v31 = *(_DWORD *)(a1 + 1);
          Sizeb = v31;
          *a4 = 5;
          if ( a2 - 5 < v31 || !v31 )
            return 1336;
          v32 = 2LL * v31;
          if ( v32 <= 0xFFFFFFFF && (int)v32 + 2 >= (unsigned int)v32 )
          {
            v33 = 2LL * (unsigned int)(v32 + 2);
            if ( v33 <= 0xFFFFFFFF )
            {
              v34 = (unsigned int)v33;
              i = (unsigned int)v33;
              v35 = (wchar_t *)SddlpAlloc((unsigned int)v33);
              *a3 = v35;
              if ( v35 )
              {
                v36 = Sizeb;
                *v35 = 35;
                if ( Sizeb )
                {
                  v37 = v67;
                  v38 = 2LL;
                  v39 = 0LL;
                  v40 = Sizeb;
                  do
                  {
                    v41 = v39 + *a4;
                    ++v39;
                    v42 = (unsigned __int8)v37[v41];
                    v36 = Sizeb;
                    (*a3)[v38 - 1] = a0123456789abcd[v42 >> 4];
                    (*a3)[v38] = a0123456789abcd[v42 & 0xF];
                    v38 += 2LL;
                    --v40;
                  }
                  while ( v40 );
                  PrintableOperandValue = 0;
                  v34 = i;
                }
                (*a3)[(v34 >> 1) - 1] = 0;
                *a4 += v36;
                goto LABEL_82;
              }
              goto LABEL_62;
            }
          }
          break;
        case 0x50u:
          if ( (unsigned int)(a2 - 1) >= 4 )
          {
            v17 = *(_DWORD *)(a1 + 1);
            v60 = v17;
            *a4 = 5;
            if ( v17 )
            {
              if ( a2 - 5 >= v17 )
              {
                v66 = 6LL;
                v18 = (wchar_t *)SddlpAlloc(6uLL);
                v19 = a3;
                *a3 = v18;
                if ( !v18 )
                  goto LABEL_62;
                v20 = v60;
                *v18 = 123;
                v21 = *a4;
                v22 = 0;
                Sizea = *a4;
                v63 = 0;
                if ( !v60 )
                {
                  v29 = 6;
LABEL_41:
                  v30 = (unsigned __int64)v29 >> 1;
                  (*v19)[v30 - 4] = 125;
                  (*v19)[v30 - 3] = 0;
                  *a4 = v21 + v20;
                  goto LABEL_82;
                }
                v23 = v21;
                for ( i = v21; ; v23 = i )
                {
                  v24 = &v67[v23 + v22];
                  if ( *v24 == 80 )
                    break;
                  PrintableOperandValue = GetPrintableOperandValue(
                                            (_DWORD)v24,
                                            a2 - v22 - v21,
                                            (unsigned int)&v61,
                                            (_DWORD)a4,
                                            *(__int64 *)v68,
                                            v70,
                                            v69,
                                            a8);
                  if ( PrintableOperandValue )
                    goto LABEL_82;
                  v63 += *a4;
                  if ( (int)ULongAddStringSize((unsigned int)v66, v61, &v62) < 0 )
                    goto LABEL_22;
                  v25 = v62 + 4;
                  v64 = v25;
                  if ( (unsigned int)v25 < v62 )
                    goto LABEL_22;
                  v62 += 4;
                  v26 = *a3;
                  v27 = -1LL;
                  do
                    ++v27;
                  while ( v26[v27] );
                  v28 = (wchar_t *)SddlpReAlloc(2 * v27, v25, v26);
                  *a3 = v28;
                  if ( !v28 )
                    goto LABEL_62;
                  if ( RtlStringCchPrintfW(
                         &v28[((unsigned __int64)(unsigned int)v66 >> 1) - 2],
                         (unsigned __int64)(v64 - (unsigned int)v66 + 4) >> 1,
                         L"%ls, ",
                         v61) < 0 )
                    goto LABEL_71;
                  SddlpFree(v61);
                  v20 = v60;
                  v22 = v63;
                  v21 = Sizea;
                  v61 = 0LL;
                  v29 = v64;
                  v66 = v64;
                  if ( v60 <= v63 )
                  {
                    v19 = a3;
                    goto LABEL_41;
                  }
                }
                goto LABEL_81;
              }
            }
          }
          return 1336;
        case 0x51u:
          if ( (unsigned int)(a2 - 1) >= 4 )
          {
            Size = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( Size <= 0x44 && a2 - 5 >= Size )
            {
              memmove(Sid1, a1 + 5, Size);
              PrintableOperandValue = LocalGetStringForSid(Sid1, &v61, *(__int64 *)v68, v12, v52, a8);
              if ( PrintableOperandValue )
                goto LABEL_82;
              *a4 += Size;
              v13 = -1LL;
              do
                ++v13;
              while ( v61[v13] );
              if ( (int)v13 + 6 < (unsigned int)v13 || (v14 = 2LL * (unsigned int)(v13 + 6), v14 > 0xFFFFFFFF) )
              {
LABEL_22:
                PrintableOperandValue = 534;
                goto LABEL_82;
              }
              v15 = (unsigned int)v14;
              v16 = (wchar_t *)SddlpAlloc((unsigned int)v14);
              *a3 = v16;
              if ( v16 )
              {
                if ( RtlStringCchPrintfW(v16, v15 >> 1, L"SID(%ls)", v61) >= 0 )
                  goto LABEL_82;
                goto LABEL_71;
              }
LABEL_62:
              PrintableOperandValue = 8;
              goto LABEL_82;
            }
          }
          return 1336;
        default:
          goto LABEL_81;
      }
      return 534;
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v46 = a1[9];
    i = *(_QWORD *)(a1 + 1);
    v53 = a1[10];
    v54 = v46;
    v47 = (wchar_t *)SddlpAlloc(0x40uLL);
    *a3 = v47;
    if ( !v47 )
      goto LABEL_62;
    if ( v54 == 1 )
    {
      v48 = 43;
    }
    else
    {
      if ( v54 != 2 )
        goto LABEL_68;
      v48 = 45;
    }
    *v47++ = v48;
LABEL_68:
    if ( v53 == 1 )
    {
      *v47 = 48;
      v49 = L"%I64o";
      ++v47;
    }
    else if ( v53 == 3 )
    {
      *(_DWORD *)v47 = 7864368;
      v49 = L"%I64x";
      v47 += 2;
    }
    else
    {
      v49 = L"%I64u";
    }
    if ( RtlStringCchCopyW(pszDest, 8uLL, v49) < 0 )
      goto LABEL_71;
    v50 = i;
    if ( i || v53 != 1 )
    {
      if ( v54 == 2 )
        v50 = -i;
      if ( RtlStringCchPrintfW(v47, 32 - (v47 - *a3), pszDest, v50) < 0 )
      {
LABEL_71:
        PrintableOperandValue = 50;
        goto LABEL_82;
      }
    }
    *a4 += 10;
LABEL_82:
    if ( v61 )
      SddlpFree(v61);
    return PrintableOperandValue;
  }
  return 87LL;
}
