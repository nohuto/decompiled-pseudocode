/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AF80
 * Callers:
 *     ?QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800513B0 (-QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800513C0 (-QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800513D0 (-QueryInterface@CCompressedSourceBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800513E0 (-QueryInterface@CCompressedSourceBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800513F0 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051400 (-QueryInterface@CCompressedSourceBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051410 (-QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::QueryInterface(
        CCompressedSourceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CCompressedSourceBitmap *__hidden, const struct _GUID *, void **); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax

  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(CCompressedSourceBitmap *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v5 == CCompressedSourceBitmap::HrFindInterface )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
        if ( v6 )
        {
          v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1 )
            v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data4;
          if ( v7 )
          {
            v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1 )
              v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data4;
            if ( v8 )
            {
              v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1;
              if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1 )
                v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data4;
              if ( v9 )
              {
                v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
                if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
                  v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
                if ( v10 )
                {
                  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1;
                  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1 )
                    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data4;
                  if ( v11 )
                  {
                    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmap.Data1;
                    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmap.Data1 )
                      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmap.Data4;
                    if ( v14 )
                    {
                      v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapSource.Data1;
                      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapSource.Data1 )
                        v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapSource.Data4;
                      if ( v15 )
                      {
                        v12 = -2147467262;
                      }
                      else
                      {
                        v12 = 0;
                        *a3 = (char *)this + 40;
                      }
                    }
                    else
                    {
                      v12 = 0;
                      *a3 = (char *)this + 40;
                    }
                  }
                  else
                  {
                    v12 = 0;
                    *a3 = (char *)this + 48;
                  }
                }
                else
                {
                  v12 = 0;
                  *a3 = (char *)this + 16;
                }
              }
              else
              {
                v12 = 0;
                *a3 = (char *)this + 24;
              }
            }
            else
            {
              v12 = 0;
              *a3 = (char *)this + 16;
            }
          }
          else
          {
            v12 = 0;
            *a3 = (char *)this + 256;
          }
        }
        else
        {
          v12 = 0;
          *a3 = (char *)this + 264;
        }
      }
      else
      {
        v12 = v5(this, a2, a3);
      }
      if ( v12 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v12;
      }
    }
    else
    {
      *a3 = this;
      v12 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v12;
  }
  return 2147942487LL;
}
