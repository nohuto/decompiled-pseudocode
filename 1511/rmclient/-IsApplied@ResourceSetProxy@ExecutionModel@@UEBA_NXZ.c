/*
 * XREFs of ?IsApplied@ResourceSetProxy@ExecutionModel@@UEBA_NXZ @ 0x180010C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z @ 0x180010C48 (-GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z.c)
 */

bool __fastcall ExecutionModel::ResourceSetProxy::IsApplied(ExecutionModel::ResourceSetProxy *this)
{
  char v1; // bl
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)ExecutionModel::ResourceSetProxy::GetProperty((__int64)this, 4, (__int64)&v3).Simple >= 0 )
    return v3 != 0;
  return v1;
}
