/*
 * XREFs of ?v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18002BAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CImmersiveWindowFactoryBase::v_MarshalAdditionalData(
        CImmersiveWindowFactoryBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4)
{
  int result; // eax
  char pv; // [rsp+30h] [rbp+8h] BYREF

  result = IStream_Write(a2, (char *)this + 76, 0x10u);
  if ( result >= 0 )
  {
    result = IStream_Write(a2, (char *)this + 92, 4u);
    if ( result >= 0 )
    {
      result = IStream_Write(a2, (char *)this + 65, 1u);
      if ( result >= 0 )
      {
        pv = 0;
        result = IStream_Write(a2, &pv, 1u);
        if ( result >= 0 )
        {
          result = IStream_Write(a2, (char *)this + 104, 1u);
          if ( result >= 0 )
          {
            if ( *((_BYTE *)this + 104) )
              result = IStream_Write(a2, (char *)this + 108, 4u);
            if ( result >= 0 )
            {
              result = IStream_Write(a2, (char *)this + 112, 1u);
              if ( result >= 0 )
              {
                if ( *((_BYTE *)this + 112) )
                  return IStream_Write(a2, (char *)this + 116, 4u);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
