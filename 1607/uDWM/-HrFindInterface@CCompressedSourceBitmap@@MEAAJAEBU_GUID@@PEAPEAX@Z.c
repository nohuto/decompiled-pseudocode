/*
 * XREFs of ?HrFindInterface@CCompressedSourceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::HrFindInterface(
        CCompressedSourceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a3 )
  {
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
    if ( !result )
    {
      if ( this )
      {
        *a3 = (char *)this + 264;
        return result;
      }
      goto LABEL_34;
    }
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data4;
    if ( !result )
    {
      if ( this )
      {
        v6 = (char *)this + 256;
        goto LABEL_24;
      }
      goto LABEL_34;
    }
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data4;
    if ( v4 )
    {
      result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1 )
        result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data4;
      if ( !result )
      {
        if ( this )
        {
          *a3 = (char *)this + 24;
          return result;
        }
        goto LABEL_34;
      }
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v5 )
      {
        result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1 )
          result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data4;
        if ( !result )
        {
          if ( this )
          {
            *a3 = (char *)this + 48;
            return result;
          }
          goto LABEL_34;
        }
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmap.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmap.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmap.Data4;
        if ( v7 )
        {
          v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapSource.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapSource.Data1 )
            v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapSource.Data4;
          if ( v8 )
            return 2147500034LL;
        }
        result = 0LL;
        if ( this )
        {
          *a3 = (char *)this + 40;
          return result;
        }
LABEL_34:
        v6 = 0LL;
        goto LABEL_24;
      }
    }
    result = 0LL;
    if ( this )
    {
      v6 = (char *)this + 16;
LABEL_24:
      *a3 = v6;
      return result;
    }
    goto LABEL_34;
  }
  return 2147942487LL;
}
