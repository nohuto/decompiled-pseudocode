/*
 * XREFs of ?get_DisplayName@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180004130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180004218 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180005154 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022BAC (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::get_DisplayName(
        struct ITileInfo **this,
        HSTRING *a2)
{
  struct IVisualElementEnumerator *v4; // r8
  struct ITileManager *v5; // rdx
  HRESULT DisplayName; // eax
  WCHAR *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  PCNZWCH sourceString; // [rsp+20h] [rbp-78h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-70h]
  _BYTE v14[80]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v14,
    this[9]);
  v4 = this[8];
  v5 = this[7];
  *(_QWORD *)length = -1LL;
  sourceString = 0LL;
  DisplayName = TileDataLayerItemWrappers::TDLTileInfoHelper::GetDisplayName(
                  (TileDataLayerItemWrappers::TDLTileInfoHelper *)v14,
                  v5,
                  v4,
                  (unsigned __int16 **)&sourceString);
  v7 = (WCHAR *)sourceString;
  v8 = DisplayName;
  if ( DisplayName < 0 )
  {
    v9 = 39LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
      (const char *)(unsigned int)DisplayName);
    goto LABEL_11;
  }
  v10 = *(_QWORD *)length;
  if ( *(_QWORD *)length == -1LL )
  {
    if ( sourceString )
    {
      do
        ++v10;
      while ( sourceString[v10] );
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  DisplayName = WindowsCreateString(sourceString, v10, a2);
  v8 = DisplayName;
  if ( DisplayName < 0 )
  {
    v9 = 41LL;
    goto LABEL_10;
  }
LABEL_11:
  if ( v7 )
    CoTaskMemFree(v7);
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v14);
  return v8;
}
