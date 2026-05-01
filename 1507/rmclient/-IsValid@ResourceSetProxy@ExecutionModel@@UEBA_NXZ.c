/*
 * XREFs of ?IsValid@ResourceSetProxy@ExecutionModel@@UEBA_NXZ @ 0x180010160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z @ 0x1800100A8 (-GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z.c)
 */

bool __fastcall ExecutionModel::ResourceSetProxy::IsValid(ExecutionModel::ResourceSetProxy *this)
{
  char v1; // bl
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)ExecutionModel::ResourceSetProxy::GetProperty((__int64)this, 3, (__int64)&v3).Simple >= 0 )
    return v3 != 0;
  return v1;
}
