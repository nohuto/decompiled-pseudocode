/*
 * XREFs of ?GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180011FF0
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180011458 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceLevel1::GetCompatibleTextureFormat(CD3DDeviceLevel1 *this, enum DXGI_FORMAT a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  v2 = a2 - 2;
  if ( !v2 )
    return *((unsigned int *)this + 174);
  v3 = v2 - 8;
  if ( !v3 )
    return *((unsigned int *)this + 172);
  v4 = v3 - 14;
  if ( !v4 )
    return *((unsigned int *)this + 171);
  v5 = v4 - 4;
  if ( !v5 )
    return *((unsigned int *)this + 167);
  v6 = v5 - 33;
  if ( !v6 )
    return *((unsigned int *)this + 165);
  v7 = v6 - 4;
  if ( !v7 )
    return *((unsigned int *)this + 166);
  v8 = v7 - 22;
  if ( !v8 )
    return *((unsigned int *)this + 169);
  if ( v8 == 1 )
    return *((unsigned int *)this + 170);
  else
    return *((unsigned int *)this + 167);
}
