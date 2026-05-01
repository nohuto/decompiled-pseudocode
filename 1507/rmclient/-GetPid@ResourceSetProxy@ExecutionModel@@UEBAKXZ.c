/*
 * XREFs of ?GetPid@ResourceSetProxy@ExecutionModel@@UEBAKXZ @ 0x180010080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z @ 0x1800100A8 (-GetProperty@ResourceSetProxy@ExecutionModel@@IEBAJW4_ResourceSetPropertyType@@PEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::GetPid(ExecutionModel::ResourceSetProxy *this)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  ExecutionModel::ResourceSetProxy::GetProperty(this, 1LL, &v2);
  return v2;
}
