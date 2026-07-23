/*
 * XREFs of CmpQueryKeyValueData @ 0x14043F230
 * Callers:
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCDA4 (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpGetValueDataFromCache @ 0x1404018B0 (CmpGetValueDataFromCache.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 */

__int64 __fastcall CmpQueryKeyValueData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *Src, unsigned int a6, int *a7)
{
  __int64 v9; // r11
  unsigned int v10; // r15d
  void *ValueDataFromCache; // rbx
  _DWORD *v12; // rsi
  unsigned __int16 v13; // cx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  bool v16; // r8
  unsigned int v17; // r12d
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // r14d
  int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // r9d
  char v25; // r10
  size_t v26; // r8
  int v27; // edx
  unsigned int v28; // r14d
  unsigned int v29; // r13d
  unsigned int v30; // r8d
  unsigned int i; // eax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  _WORD *v35; // rcx
  int v36; // r9d
  unsigned int v37; // edx
  unsigned int v38; // ecx
  bool v39; // r8
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // r14d
  _DWORD v43[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v44; // [rsp+58h] [rbp-50h]
  __int64 v45; // [rsp+60h] [rbp-48h]
  __int64 v46; // [rsp+B0h] [rbp+8h] BYREF
  int v47; // [rsp+B8h] [rbp+10h]
  size_t Size; // [rsp+C0h] [rbp+18h]
  char v49; // [rsp+C8h] [rbp+20h] BYREF

  v47 = a2;
  v46 = a1;
  v9 = a1;
  v10 = 0;
  ValueDataFromCache = 0LL;
  v49 = 0;
  v43[0] = -1;
  v43[1] = 0;
  v45 = *(_QWORD *)(a1 + 24);
  v12 = Src;
  v44 = a3;
  v13 = *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    v13 *= 2;
  if ( a4 != 2 )
  {
    if ( !a4 )
    {
      v32 = v13;
      v17 = 0;
      *a7 = v13 + 12;
      v33 = a6;
      if ( a6 < 0xC )
      {
        v17 = -1073741789;
      }
      else
      {
        *v12 = 0;
        v12[1] = *(_DWORD *)(a3 + 12);
        v12[2] = v32;
        v34 = v33 - 12;
        if ( v34 < v32 )
        {
          v32 = v34;
          v17 = -2147483643;
        }
        v35 = v12 + 3;
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
          CmpCopyCompressedName(v35, v32, (unsigned __int8 *)(a3 + 20), *(unsigned __int16 *)(a3 + 2));
        else
          memmove(v35, (const void *)(a3 + 20), v32);
      }
      goto LABEL_20;
    }
    v22 = a4 - 1;
    if ( v22 )
    {
      v36 = v22 - 2;
      if ( v36 )
      {
        if ( v36 == 1 )
        {
          v37 = *(_DWORD *)(a3 + 4);
          if ( v37 < 0x80000000 )
            v38 = *(_DWORD *)(a3 + 4);
          else
            v38 = v37 + 0x80000000;
          v39 = v37 >= 0x80000000;
          v17 = 0;
          *a7 = v38 + 8;
          v40 = a6;
          if ( a6 < 8 )
          {
            v17 = -1073741789;
          }
          else
          {
            *v12 = *(_DWORD *)(a3 + 12);
            v12[1] = v38;
            v41 = v40 - 8;
            v42 = v38;
            if ( v41 < v38 )
            {
              v42 = v41;
              v17 = -2147483643;
            }
            if ( v38 )
            {
              if ( v39 )
              {
                ValueDataFromCache = (void *)(a3 + 8);
              }
              else
              {
                ValueDataFromCache = (void *)CmpGetValueDataFromCache(v9, a2, a3, (__int64)&v49, (__int64)v43);
                if ( !ValueDataFromCache )
                  v17 = -1073741670;
              }
              if ( ValueDataFromCache )
                memmove(v12 + 2, ValueDataFromCache, v42);
            }
          }
        }
        else
        {
          v17 = -1073741811;
        }
        goto LABEL_20;
      }
    }
    v23 = *(_DWORD *)(a3 + 4);
    if ( v23 >= 0x80000000 )
    {
      v24 = v23 + 0x80000000;
      LODWORD(Size) = v23 + 0x80000000;
    }
    else
    {
      v24 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v24;
    }
    v25 = v23 >= 0x80000000;
    LOBYTE(Src) = v23 >= 0x80000000;
    v26 = v13;
    v27 = v13 + v24 + 20;
    v28 = 0;
    if ( v24 )
    {
      v28 = (v13 + 27) & 0xFFFFFFF8;
      if ( v28 > (unsigned int)v13 + 20 )
        v27 = v28 + v24;
    }
    v17 = 0;
    *a7 = v27;
    v29 = a6;
    if ( a6 < 0x14 )
    {
      v17 = -1073741789;
      goto LABEL_20;
    }
    *v12 = 0;
    v12[1] = *(_DWORD *)(a3 + 12);
    v12[3] = v24;
    v12[4] = v13;
    if ( v29 - 20 < v13 )
    {
      v26 = v29 - 20;
      v17 = -2147483643;
    }
    if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    {
      v30 = (unsigned int)v26 >> 1;
      if ( v30 >= *(unsigned __int16 *)(a3 + 2) )
        v30 = *(unsigned __int16 *)(a3 + 2);
      for ( i = 0; i < v30; ++i )
        *((_WORD *)v12 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
    }
    else
    {
      memmove(v12 + 5, (const void *)(a3 + 20), v26);
      v24 = Size;
      v25 = (char)Src;
      v9 = v46;
    }
    if ( !v24 )
    {
      v12[2] = -1;
      goto LABEL_20;
    }
    if ( v25 == 1 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
      goto LABEL_47;
    }
    if ( (unsigned __int8)CmpGetValueData(
                            *(_QWORD *)(v9 + 24),
                            v47,
                            a3,
                            (unsigned int)&v46,
                            (__int64)&Src,
                            (__int64)&v49,
                            (__int64)v43) )
    {
      ValueDataFromCache = Src;
      if ( Src )
      {
LABEL_46:
        v24 = Size;
LABEL_47:
        v12[2] = v28;
        if ( v29 >= v28 )
          v10 = v29 - v28;
        if ( v10 < v24 )
        {
          v24 = v10;
          v17 = -2147483643;
        }
        if ( ValueDataFromCache )
          memmove((char *)v12 + v28, ValueDataFromCache, v24);
        goto LABEL_20;
      }
    }
    else
    {
      ValueDataFromCache = 0LL;
    }
    v17 = -1073741670;
    goto LABEL_46;
  }
  v14 = *(_DWORD *)(a3 + 4);
  v15 = v14 + 0x80000000;
  if ( v14 < 0x80000000 )
    v15 = *(_DWORD *)(a3 + 4);
  v16 = v14 >= 0x80000000;
  v17 = 0;
  *a7 = v15 + 12;
  v18 = a6;
  if ( a6 < 0xC )
  {
    v17 = -1073741789;
    goto LABEL_20;
  }
  *v12 = 0;
  v12[1] = *(_DWORD *)(a3 + 12);
  v12[2] = v15;
  v19 = v18 - 12;
  v20 = v15;
  if ( v19 < v15 )
  {
    v20 = v19;
    v17 = -2147483643;
  }
  if ( v15 )
  {
    if ( v16 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
    }
    else
    {
      if ( (unsigned __int8)CmpGetValueData(
                              *(_QWORD *)(v9 + 24),
                              a2,
                              a3,
                              (unsigned int)&v46,
                              (__int64)&Src,
                              (__int64)&v49,
                              (__int64)v43) )
      {
        ValueDataFromCache = Src;
        if ( Src )
        {
LABEL_13:
          memmove(v12 + 3, ValueDataFromCache, v20);
          goto LABEL_20;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
      }
      v17 = -1073741670;
    }
    if ( !ValueDataFromCache )
      goto LABEL_20;
    goto LABEL_13;
  }
LABEL_20:
  if ( ValueDataFromCache && ValueDataFromCache != (void *)(a3 + 8) )
  {
    if ( v49 == 1 )
      ExFreePoolWithTag(ValueDataFromCache, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(v45 + 16))(v45, v43);
  }
  return v17;
}
