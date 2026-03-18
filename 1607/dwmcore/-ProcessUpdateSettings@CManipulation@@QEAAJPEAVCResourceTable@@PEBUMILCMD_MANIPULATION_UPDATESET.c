/*
 * XREFs of ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x180145BA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::ProcessUpdateSettings(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATESETTINGS *a3)
{
  bool v5; // zf
  char v6; // dl
  bool v7; // al
  char v8; // cl
  bool v9; // al
  char v10; // r8

  *((_DWORD *)this + 106) = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 6) == 0;
  *((_BYTE *)this + 428) &= ~1u;
  *((_BYTE *)this + 428) |= !v5;
  v6 = *((_BYTE *)this + 428);
  v7 = *((_DWORD *)a3 + 7) != 0;
  *((_BYTE *)this + 429) &= ~1u;
  *((_BYTE *)this + 429) |= v7;
  v8 = *((_BYTE *)this + 429);
  v9 = *((_DWORD *)a3 + 8) != 0;
  *((_BYTE *)this + 430) &= ~1u;
  *((_BYTE *)this + 430) |= v9;
  v5 = *((_DWORD *)a3 + 3) == 0;
  v10 = *((_BYTE *)this + 430);
  *((_BYTE *)this + 428) = v6 ^ (v6 ^ (2 * !v5)) & 2;
  *((_BYTE *)this + 429) = v8 ^ (v8 ^ (2 * (*((_DWORD *)a3 + 4) != 0))) & 2;
  *((_BYTE *)this + 430) = v10 ^ (v10 ^ (2 * (*((_DWORD *)a3 + 5) != 0))) & 2;
  return 0LL;
}
