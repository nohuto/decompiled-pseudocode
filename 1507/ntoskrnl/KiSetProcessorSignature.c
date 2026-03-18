/*
 * XREFs of KiSetProcessorSignature @ 0x140402138
 * Callers:
 *     KiSetFeatureBits @ 0x1403F80E8 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  ULONG_PTR v14; // r10
  unsigned int v15; // r15d
  unsigned int v16; // ebx
  unsigned int v17; // r12d
  unsigned int *v18; // rdi
  ULONG_PTR v19; // r14
  ULONG_PTR v20; // rsi
  unsigned int v21; // r11d
  unsigned int v22; // ecx
  int v28; // edx
  ULONG_PTR v29; // rax
  unsigned int v30; // r11d
  __int64 v31; // r12
  unsigned int *v32; // rdi
  unsigned int v33; // edx
  unsigned int v34; // ecx
  ULONG_PTR v35; // rdx
  unsigned __int64 v36; // r15
  __int64 i; // rbx
  unsigned int v38; // ecx
  unsigned int v39; // r14d
  ULONG_PTR v40; // rax
  ULONG_PTR v41; // rax
  __int64 result; // rax
  int v43; // [rsp+70h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v2 + 40) = a1;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  *(_DWORD *)(v2 + 32) = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  *(_DWORD *)(v2 + 36) = _RAX;
  *(_DWORD *)(v2 + 56) = _RAX;
  *(_DWORD *)(v2 + 60) = _RBX;
  *(_DWORD *)(v2 + 64) = _RCX;
  *(_DWORD *)(v2 + 68) = _RDX;
  *(_QWORD *)(v2 + 16) = 0LL;
  v14 = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  v15 = 0;
  v16 = 0;
  *(_DWORD *)v2 = 0;
  v17 = 0;
  v18 = (unsigned int *)&unk_1402949E0;
  v19 = KeFeatureBits;
  *(_QWORD *)(v2 + 8) = KeFeatureBits;
  v20 = KeFeatureBits2;
  do
  {
    v21 = *v18;
    if ( (*v18 & 2) == 0 )
    {
      if ( !HIBYTE(v21) || (v22 = HIBYTE(v21), _bittest((const int *)&v22, *(unsigned __int8 *)(a1 + 1597))) )
      {
        _RAX = *(v18 - 4);
        if ( *((_QWORD *)v18 - 2) != __PAIR64__(v16, v15) )
        {
          v15 = *(v18 - 4);
          *(_DWORD *)v2 = *(v18 - 3);
          if ( ((unsigned int)_RAX < 0x80000000
             || (unsigned int)_RAX > *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20))
            && (unsigned int)_RAX > *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) )
          {
            *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
          }
          else
          {
            __asm { cpuid }
            *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = _RAX;
            *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = _RBX;
            *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = _RCX;
            *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = _RDX;
          }
        }
        v28 = 0;
        if ( (*(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38 + 4LL * (int)*(v18 - 1)) & *(v18 - 2)) == 0 )
        {
          if ( (v21 & 8) == 0
            || (*(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) & *((_QWORD *)v18 + 1)) != *((_QWORD *)v18 + 1) )
          {
            if ( (v21 & 0x10) != 0 && (v14 & *((_QWORD *)v18 + 1)) == *((_QWORD *)v18 + 1) )
              v28 = 1;
            if ( !v28 )
            {
              if ( (v21 & 1) != 0 )
              {
                if ( !*(_DWORD *)(a1 + 36) )
                  KdInitSystem(0LL, KeLoaderBlock_0);
                KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, *(v18 - 4), *(v18 - 2), (int)*(v18 - 1));
              }
              if ( (v21 & 4) != 0 && *(_DWORD *)(a1 + 36) )
              {
                if ( (v21 & 8) != 0 )
                {
                  v19 = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  if ( (v19 & *((_QWORD *)v18 + 1)) == *((_QWORD *)v18 + 1) )
                    goto LABEL_44;
                  goto LABEL_41;
                }
                if ( (v21 & 0x10) != 0 && (v20 & *((_QWORD *)v18 + 1)) == *((_QWORD *)v18 + 1) )
                {
LABEL_44:
                  if ( !*(_DWORD *)(a1 + 36) )
                    KdInitSystem(0LL, KeLoaderBlock_0);
                  KeBugCheckEx(0x5Du, 0xFFFFFFFEuLL, *(v18 - 4), *(v18 - 2), (int)*(v18 - 1));
                }
              }
              v19 = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_41:
              v16 = *(_DWORD *)v2;
              goto LABEL_42;
            }
          }
          v19 = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        }
        if ( (v21 & 8) != 0 )
        {
          *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) |= *((_QWORD *)v18 + 1);
        }
        else if ( (v21 & 0x10) != 0 )
        {
          v14 |= *((_QWORD *)v18 + 1);
          *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
        }
        if ( (v21 & 4) != 0 && *(_DWORD *)(a1 + 36) )
        {
          if ( (v21 & 8) != 0 )
          {
            v29 = v19 & *((_QWORD *)v18 + 1);
          }
          else
          {
            if ( (v21 & 0x10) == 0 )
              goto LABEL_50;
            v29 = v20 & *((_QWORD *)v18 + 1);
          }
          if ( v29 != *((_QWORD *)v18 + 1) )
          {
LABEL_50:
            if ( !*(_DWORD *)(a1 + 36) )
              KdInitSystem(0LL, KeLoaderBlock_0);
            KeBugCheckEx(0x5Du, 0xFFFFFFFDuLL, *(v18 - 4), *(v18 - 2), (int)*(v18 - 1));
          }
        }
        goto LABEL_41;
      }
    }
LABEL_42:
    ++v17;
    v18 += 8;
  }
  while ( v17 < 0x12 );
  v30 = 0;
  *(_DWORD *)v2 = 0;
  v31 = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  while ( v30 < 2 )
  {
    v32 = (unsigned int *)((char *)&KiMsrFeatureTable + 24 * v30);
    *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v32;
    v33 = v32[1];
    if ( (v33 & 2) == 0 )
    {
      if ( !HIBYTE(v33) || (v34 = HIBYTE(v33), _bittest((const int *)&v34, *(unsigned __int8 *)(a1 + 1597))) )
      {
        if ( (v33 & 8) != 0 )
        {
          v35 = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
        else
        {
          if ( (v33 & 0x10) == 0 )
            goto LABEL_99;
          v35 = v14;
        }
        if ( (v35 & *((_QWORD *)v32 + 2)) == *((_QWORD *)v32 + 2) )
        {
          v36 = __readmsr(*v32);
          *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v36;
          for ( i = *((_QWORD *)v32 + 1); *(_QWORD *)i; i += 24LL )
          {
            v38 = *(_DWORD *)(i + 8);
            if ( (v38 & 2) == 0 )
            {
              if ( !HIBYTE(v38) || (v39 = HIBYTE(v38), _bittest((const int *)&v39, *(unsigned __int8 *)(a1 + 1597))) )
              {
                if ( (*(_QWORD *)i & v36) != 0 )
                {
                  if ( (v38 & 8) != 0 )
                  {
                    *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) |= *(_QWORD *)(i + 16);
                  }
                  else if ( (v38 & 0x10) != 0 )
                  {
                    v14 |= *(_QWORD *)(i + 16);
                    *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
                  }
                  if ( (v38 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    if ( (v38 & 8) != 0 )
                    {
                      v41 = v31 & *(_QWORD *)(i + 16);
                    }
                    else
                    {
                      if ( (v38 & 0x10) == 0 )
                        goto LABEL_96;
                      v41 = v20 & *(_QWORD *)(i + 16);
                    }
                    if ( v41 != *(_QWORD *)(i + 16) )
                    {
LABEL_96:
                      if ( !*(_DWORD *)(a1 + 36) )
                        KdInitSystem(0LL, KeLoaderBlock_0);
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v32, *(_QWORD *)i, HIDWORD(*(_QWORD *)i));
                    }
                  }
                }
                else
                {
                  if ( (v38 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                      KdInitSystem(0LL, KeLoaderBlock_0);
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v32, *(_QWORD *)i, HIDWORD(*(_QWORD *)i));
                  }
                  if ( (v38 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    if ( (v38 & 8) != 0 )
                    {
                      v40 = v31 & *(_QWORD *)(i + 16);
                    }
                    else
                    {
                      if ( (v38 & 0x10) == 0 )
                        continue;
                      v40 = v20 & *(_QWORD *)(i + 16);
                    }
                    if ( v40 == *(_QWORD *)(i + 16) )
                    {
                      if ( !*(_DWORD *)(a1 + 36) )
                        KdInitSystem(0LL, KeLoaderBlock_0);
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v32, *(_QWORD *)i, HIDWORD(*(_QWORD *)i));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_99:
    *(_DWORD *)v2 = ++v30;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    v14 = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v20 = KeFeatureBits2;
  }
  *(_DWORD *)(a1 + 1644) = a2;
  *(_QWORD *)(a1 + 25192) |= *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( v14 != v20 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v14, v20, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 = v14 | v20;
  }
  return result;
}
