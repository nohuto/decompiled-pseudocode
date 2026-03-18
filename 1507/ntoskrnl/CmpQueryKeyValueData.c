/*
 * XREFs of CmpQueryKeyValueData @ 0x140427AD0
 * Callers:
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpGetValueDataFromCache @ 0x14042A878 (CmpGetValueDataFromCache.c)
 *     CmpCopyCompressedName @ 0x14042B374 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpQueryKeyValueData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *Src, unsigned int a6, int *a7)
{
  int v8; // r11d
  __int64 v9; // r10
  unsigned int v10; // r15d
  void *ValueDataFromCache; // rdi
  _DWORD *v12; // rsi
  unsigned __int16 v13; // cx
  unsigned int v14; // ecx
  char v15; // r8
  unsigned int v16; // r12d
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // r14d
  int v21; // r9d
  unsigned int v22; // r14d
  char v23; // r9
  size_t v24; // r8
  int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // r13d
  unsigned int v28; // r8d
  unsigned int i; // eax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  void *v33; // rcx
  int v34; // r9d
  unsigned int v35; // ecx
  char v36; // r8
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // r14d
  unsigned int v40; // [rsp+44h] [rbp-64h]
  __int64 v41; // [rsp+60h] [rbp-48h]
  __int64 v42; // [rsp+B0h] [rbp+8h] BYREF
  int v43; // [rsp+B8h] [rbp+10h]
  int v44; // [rsp+C0h] [rbp+18h] BYREF
  char v45; // [rsp+C8h] [rbp+20h] BYREF

  v43 = a2;
  v42 = a1;
  v8 = a2;
  v9 = a1;
  v10 = 0;
  ValueDataFromCache = 0LL;
  v45 = 0;
  v44 = -1;
  v41 = *(_QWORD *)(a1 + 32);
  v12 = Src;
  v13 = *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    v13 *= 2;
  if ( a4 != 2 )
  {
    if ( !a4 )
    {
      v30 = v13;
      v16 = 0;
      *a7 = v13 + 12;
      v31 = a6;
      if ( a6 < 0xC )
      {
        v16 = -1073741789;
      }
      else
      {
        *v12 = 0;
        v12[1] = *(_DWORD *)(a3 + 12);
        v12[2] = v30;
        v32 = v31 - 12;
        if ( v32 < (unsigned int)v30 )
        {
          v30 = v32;
          v16 = -2147483643;
        }
        v33 = v12 + 3;
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
          CmpCopyCompressedName(v33, v30, a3 + 20, *(unsigned __int16 *)(a3 + 2));
        else
          memmove(v33, (const void *)(a3 + 20), (unsigned int)v30);
      }
      goto LABEL_20;
    }
    v21 = a4 - 1;
    if ( v21 )
    {
      v34 = v21 - 2;
      if ( v34 )
      {
        if ( v34 == 1 )
        {
          v35 = *(_DWORD *)(a3 + 4);
          if ( v35 < 0x80000000 )
          {
            v36 = 0;
          }
          else
          {
            v35 += 0x80000000;
            v36 = 1;
          }
          v16 = 0;
          *a7 = v35 + 8;
          v37 = a6;
          if ( a6 < 8 )
          {
            v16 = -1073741789;
          }
          else
          {
            *v12 = *(_DWORD *)(a3 + 12);
            v12[1] = v35;
            v38 = v37 - 8;
            v39 = v35;
            if ( v38 < v35 )
            {
              v39 = v38;
              v16 = -2147483643;
            }
            if ( v35 )
            {
              if ( v36 == 1 )
              {
                ValueDataFromCache = (void *)(a3 + 8);
              }
              else
              {
                ValueDataFromCache = (void *)CmpGetValueDataFromCache(v9, v8, a3, (unsigned int)&v45, (__int64)&v44);
                if ( !ValueDataFromCache )
                  v16 = -1073741670;
              }
              if ( ValueDataFromCache )
                memmove(v12 + 2, ValueDataFromCache, v39);
            }
          }
        }
        else
        {
          v16 = -1073741811;
        }
        goto LABEL_20;
      }
    }
    v22 = *(_DWORD *)(a3 + 4);
    if ( v22 >= 0x80000000 )
    {
      v22 += 0x80000000;
      v23 = 1;
    }
    else
    {
      v23 = 0;
    }
    LOBYTE(Src) = v23;
    v24 = v13;
    v25 = v13 + v22 + 20;
    v40 = 0;
    if ( v22 )
    {
      v26 = (v25 - v22 + 7) & 0xFFFFFFF8;
      v40 = v26;
      if ( v26 > v25 - v22 )
        v25 = v26 + v22;
    }
    v16 = 0;
    *a7 = v25;
    v27 = a6;
    if ( a6 < 0x14 )
    {
      v16 = -1073741789;
      goto LABEL_20;
    }
    *v12 = 0;
    v12[1] = *(_DWORD *)(a3 + 12);
    v12[3] = v22;
    v12[4] = v24;
    if ( v27 - 20 < (unsigned int)v24 )
    {
      v24 = v27 - 20;
      v16 = -2147483643;
    }
    if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
    {
      v28 = (unsigned int)v24 >> 1;
      if ( v28 >= *(unsigned __int16 *)(a3 + 2) )
        v28 = *(unsigned __int16 *)(a3 + 2);
      for ( i = 0; i < v28; ++i )
        *((_WORD *)v12 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
    }
    else
    {
      memmove(v12 + 5, (const void *)(a3 + 20), v24);
      v23 = (char)Src;
      v9 = v42;
      v8 = v43;
    }
    if ( !v22 )
    {
      v12[2] = -1;
      goto LABEL_20;
    }
    if ( v23 != 1 )
    {
      if ( (unsigned __int8)CmpGetValueData(
                              *(_QWORD *)(v9 + 32),
                              v8,
                              a3,
                              (unsigned int)&v42,
                              (__int64)&Src,
                              (__int64)&v45,
                              (__int64)&v44) )
      {
        ValueDataFromCache = Src;
        if ( Src )
        {
LABEL_47:
          v12[2] = v40;
          if ( v27 >= v40 )
            v10 = v27 - v40;
          if ( v10 < v22 )
          {
            v22 = v10;
            v16 = -2147483643;
          }
          if ( ValueDataFromCache )
            memmove((char *)v12 + v40, ValueDataFromCache, v22);
          goto LABEL_20;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
      }
      v16 = -1073741670;
      goto LABEL_47;
    }
    ValueDataFromCache = (void *)(a3 + 8);
    goto LABEL_47;
  }
  v14 = *(_DWORD *)(a3 + 4);
  if ( v14 >= 0x80000000 )
  {
    v14 += 0x80000000;
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  v16 = 0;
  *a7 = v14 + 12;
  v17 = a6;
  if ( a6 < 0xC )
  {
    v16 = -1073741789;
    goto LABEL_20;
  }
  *v12 = 0;
  v12[1] = *(_DWORD *)(a3 + 12);
  v12[2] = v14;
  v18 = v17 - 12;
  v19 = v14;
  if ( v18 < v14 )
  {
    v19 = v18;
    v16 = -2147483643;
  }
  if ( v14 )
  {
    if ( v15 == 1 )
    {
      ValueDataFromCache = (void *)(a3 + 8);
    }
    else
    {
      if ( (unsigned __int8)CmpGetValueData(
                              *(_QWORD *)(v9 + 32),
                              v8,
                              a3,
                              (unsigned int)&v42,
                              (__int64)&Src,
                              (__int64)&v45,
                              (__int64)&v44) )
      {
        ValueDataFromCache = Src;
        if ( Src )
        {
LABEL_13:
          memmove(v12 + 3, ValueDataFromCache, v19);
          goto LABEL_20;
        }
      }
      else
      {
        ValueDataFromCache = 0LL;
      }
      v16 = -1073741670;
    }
    if ( !ValueDataFromCache )
      goto LABEL_20;
    goto LABEL_13;
  }
LABEL_20:
  if ( ValueDataFromCache && ValueDataFromCache != (void *)(a3 + 8) )
  {
    if ( v45 == 1 )
      ExFreePoolWithTag(ValueDataFromCache, 0);
    else
      (*(void (__fastcall **)(__int64, int *))(v41 + 16))(v41, &v44);
  }
  return v16;
}
