/*
 * XREFs of KiIntersectFeaturesWithPolicy @ 0x1403D65F0
 * Callers:
 *     KiInitializeXSave @ 0x1403D6360 (KiInitializeXSave.c)
 * Callees:
 *     KiGetProcessorInformation @ 0x14014656C (KiGetProcessorInformation.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiIsXSaveFeatureAllowed @ 0x1403D6730 (KiIsXSaveFeatureAllowed.c)
 *     KiLoadPolicyFromImage @ 0x1403D67C0 (KiLoadPolicyFromImage.c)
 */

void __fastcall KiIntersectFeaturesWithPolicy(__int64 a1, __int64 *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // r12d
  unsigned int v12; // ecx
  _DWORD *v13; // rax
  char IsXSaveFeatureAllowed; // al
  unsigned int v15; // [rsp+20h] [rbp-78h] BYREF
  _DWORD *v16; // [rsp+28h] [rbp-70h] BYREF
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v19[3]; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+4Ch] [rbp-4Ch] BYREF
  _LARGE_INTEGER UpdateSignature; // [rsp+50h] [rbp-48h]

  v3 = 0;
  v4 = 0LL;
  if ( *a2 )
  {
    if ( (unsigned int)KiLoadPolicyFromImage(a1, &v17, v18) == -1073741204 )
    {
      *((_DWORD *)a2 + 5) &= 0xFFFFFFFC;
      *a2 = 0LL;
      a2[67] = 0LL;
    }
    else
    {
      KiGetProcessorInformation(v19, &v20, &v16, &v15);
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = a2[67];
      v7 = *a2;
      v8 = *a2 | v6;
      UpdateSignature = CurrentPrcb->UpdateSignature;
      if ( v8 )
      {
        v9 = v17;
        do
        {
          if ( v3 >= 0x40 )
            break;
          if ( (v8 & 1) != 0 )
          {
            v10 = *(_QWORD *)(v9 + 16);
            if ( _bittest64(&v10, v3) )
            {
              v11 = 0;
              v15 = *(_DWORD *)(v9 + 24);
              if ( v15 )
              {
                v12 = v15;
                v13 = (_DWORD *)(v9 + 32);
                v16 = (_DWORD *)(v9 + 32);
                do
                {
                  if ( *v13 == v3 )
                  {
                    IsXSaveFeatureAllowed = KiIsXSaveFeatureAllowed(v9, v11, CurrentPrcb, v19);
                    v12 = v15;
                    if ( IsXSaveFeatureAllowed )
                      _bittestandset64(&v4, v3);
                    v13 = v16;
                  }
                  v13 += 4;
                  ++v11;
                  v16 = v13;
                }
                while ( v11 < v12 );
              }
            }
          }
          ++v3;
          v8 >>= 1;
        }
        while ( v8 );
      }
      *a2 = v4 & v7;
      a2[67] = v4 & v6;
    }
  }
}
