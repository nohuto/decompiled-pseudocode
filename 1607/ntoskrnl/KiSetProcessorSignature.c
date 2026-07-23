/*
 * XREFs of KiSetProcessorSignature @ 0x1403DE364
 * Callers:
 *     KiSetFeatureBits @ 0x1403D57C8 (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  ULONG_PTR v13; // r12
  ULONG_PTR v14; // r15
  unsigned int v15; // r11d
  unsigned int v16; // ebx
  unsigned int v17; // r13d
  unsigned int *v18; // rsi
  ULONG_PTR v19; // r9
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  int v27; // edx
  ULONG_PTR v28; // rax
  ULONG_PTR v29; // rax
  unsigned int i; // r8d
  unsigned int *v31; // rsi
  unsigned int v32; // edx
  unsigned int v33; // ecx
  ULONG_PTR v34; // rdx
  unsigned __int64 v35; // r11
  __int64 j; // rbx
  unsigned int v37; // ecx
  unsigned int v38; // r10d
  ULONG_PTR v39; // rax
  ULONG_PTR v40; // rax
  __int64 result; // rax
  unsigned int v42; // [rsp+30h] [rbp-88h]
  unsigned int v43; // [rsp+40h] [rbp-78h]
  unsigned int v44; // [rsp+48h] [rbp-70h]
  unsigned __int64 v45; // [rsp+70h] [rbp-48h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v43 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v44 = _RAX;
  v45 = __PAIR64__(_RBX, _RAX);
  v46 = __PAIR64__(_RDX, _RCX);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v42 = 0;
  v17 = 0;
  v18 = (unsigned int *)&unk_140261CC0;
  v19 = KeFeatureBits2;
  do
  {
    v20 = *v18;
    if ( (*v18 & 2) == 0 )
    {
      if ( !HIBYTE(v20) || (v21 = HIBYTE(v20), _bittest((const int *)&v21, *(unsigned __int8 *)(a1 + 1597))) )
      {
        _RAX = *(v18 - 4);
        if ( *((_QWORD *)v18 - 2) != __PAIR64__(v16, v15) )
        {
          v15 = *(v18 - 4);
          v42 = *(v18 - 3);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v43) && (unsigned int)_RAX > v44 )
          {
            v45 = 0LL;
            v46 = 0LL;
          }
          else
          {
            __asm { cpuid }
            v45 = __PAIR64__(_RBX, _RAX);
            v46 = __PAIR64__(_RDX, _RCX);
          }
        }
        v27 = 0;
        if ( (*((_DWORD *)&v45 + (int)*(v18 - 1)) & *(v18 - 2)) != 0
          || (v20 & 8) != 0 && (v13 & *((_QWORD *)v18 + 1)) == *((_QWORD *)v18 + 1) )
        {
          goto LABEL_27;
        }
        if ( (v20 & 0x10) != 0 && (v14 & *((_QWORD *)v18 + 1)) == *((_QWORD *)v18 + 1) )
          v27 = 1;
        if ( v27 )
        {
LABEL_27:
          if ( (v20 & 8) != 0 )
          {
            v13 |= *((_QWORD *)v18 + 1);
          }
          else if ( (v20 & 0x10) != 0 )
          {
            v14 |= *((_QWORD *)v18 + 1);
          }
          if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
          {
            if ( (v20 & 8) != 0 )
            {
              v29 = KeFeatureBits & *((_QWORD *)v18 + 1);
            }
            else
            {
              if ( (v20 & 0x10) == 0 )
                goto LABEL_47;
              v29 = KeFeatureBits2 & *((_QWORD *)v18 + 1);
            }
            if ( v29 != *((_QWORD *)v18 + 1) )
            {
LABEL_47:
              if ( !*(_DWORD *)(a1 + 36) )
                KdInitSystem(0LL, KeLoaderBlock_0);
              KeBugCheckEx(0x5Du, 0xFFFFFFFDuLL, *(v18 - 4), *(v18 - 2), (int)*(v18 - 1));
            }
          }
          goto LABEL_38;
        }
        if ( (v20 & 1) != 0 )
        {
          if ( !*(_DWORD *)(a1 + 36) )
            KdInitSystem(0LL, KeLoaderBlock_0);
          KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, *(v18 - 4), *(v18 - 2), (int)*(v18 - 1));
        }
        if ( (v20 & 4) != 0 && *(_DWORD *)(a1 + 36) )
        {
          if ( (v20 & 8) != 0 )
          {
            v28 = KeFeatureBits & *((_QWORD *)v18 + 1);
            goto LABEL_23;
          }
          if ( (v20 & 0x10) != 0 )
          {
            v28 = KeFeatureBits2 & *((_QWORD *)v18 + 1);
LABEL_23:
            if ( v28 == *((_QWORD *)v18 + 1) )
            {
              if ( !*(_DWORD *)(a1 + 36) )
                KdInitSystem(0LL, KeLoaderBlock_0);
              KeBugCheckEx(0x5Du, 0xFFFFFFFEuLL, *(v18 - 4), *(v18 - 2), (int)*(v18 - 1));
            }
          }
        }
LABEL_38:
        v16 = v42;
      }
    }
    ++v17;
    v18 += 8;
  }
  while ( v17 < 0x12 );
  for ( i = 0; i < 2; ++i )
  {
    v31 = (unsigned int *)((char *)&KiMsrFeatureTable + 24 * i);
    v32 = v31[1];
    if ( (v32 & 2) == 0 )
    {
      if ( !HIBYTE(v32) || (v33 = HIBYTE(v32), _bittest((const int *)&v33, *(unsigned __int8 *)(a1 + 1597))) )
      {
        if ( (v32 & 8) != 0 )
        {
          v34 = v13;
        }
        else
        {
          if ( (v32 & 0x10) == 0 )
            continue;
          v34 = v14;
        }
        if ( (v34 & *((_QWORD *)v31 + 2)) == *((_QWORD *)v31 + 2) )
        {
          v35 = __readmsr(*v31);
          for ( j = *((_QWORD *)v31 + 1); *(_QWORD *)j; j += 24LL )
          {
            v37 = *(_DWORD *)(j + 8);
            if ( (v37 & 2) == 0 )
            {
              if ( !HIBYTE(v37) || (v38 = HIBYTE(v37), _bittest((const int *)&v38, *(unsigned __int8 *)(a1 + 1597))) )
              {
                if ( (*(_QWORD *)j & v35) != 0 )
                {
                  if ( (v37 & 8) != 0 )
                  {
                    v13 |= *(_QWORD *)(j + 16);
                  }
                  else if ( (v37 & 0x10) != 0 )
                  {
                    v14 |= *(_QWORD *)(j + 16);
                  }
                  if ( (v37 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    if ( (v37 & 8) != 0 )
                    {
                      v40 = KeFeatureBits & *(_QWORD *)(j + 16);
                    }
                    else
                    {
                      if ( (v37 & 0x10) == 0 )
                        goto LABEL_93;
                      v40 = KeFeatureBits2 & *(_QWORD *)(j + 16);
                    }
                    if ( v40 != *(_QWORD *)(j + 16) )
                    {
LABEL_93:
                      if ( !*(_DWORD *)(a1 + 36) )
                        KdInitSystem(0LL, KeLoaderBlock_0);
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v31, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                    }
                  }
                }
                else
                {
                  if ( (v37 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                      KdInitSystem(0LL, KeLoaderBlock_0);
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v31, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                  if ( (v37 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    if ( (v37 & 8) != 0 )
                    {
                      v39 = KeFeatureBits & *(_QWORD *)(j + 16);
                    }
                    else
                    {
                      if ( (v37 & 0x10) == 0 )
                        continue;
                      v39 = KeFeatureBits2 & *(_QWORD *)(j + 16);
                    }
                    if ( v39 == *(_QWORD *)(j + 16) )
                    {
                      if ( !*(_DWORD *)(a1 + 36) )
                        KdInitSystem(0LL, KeLoaderBlock_0);
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v31, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    KeGetPrcb(0);
    v19 = KeFeatureBits2;
  }
  *(_DWORD *)(a1 + 1644) = a2;
  *(_QWORD *)(a1 + 25320) |= v13;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( v14 != v19 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v14, v19, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 = v14 | v19;
  }
  return result;
}
