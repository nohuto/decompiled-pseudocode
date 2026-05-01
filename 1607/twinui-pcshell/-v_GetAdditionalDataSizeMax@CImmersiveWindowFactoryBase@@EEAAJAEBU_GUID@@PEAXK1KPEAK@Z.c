/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18002BA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        CImmersiveWindowFactoryBase *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // eax

  v8 = 23;
  *a7 = 0;
  if ( *((_BYTE *)this + 104) )
    v8 = 27;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    v10 = 0;
    if ( *((_BYTE *)this + 112) )
    {
      if ( v8 + 5 < v8 + 1 )
      {
        v9 = -1;
        v10 = -2147024362;
      }
      else
      {
        v9 = v8 + 5;
      }
    }
    v11 = 0;
    if ( v10 >= 0 )
      v11 = v9;
    *a7 = v11;
  }
  return (unsigned int)v10;
}
