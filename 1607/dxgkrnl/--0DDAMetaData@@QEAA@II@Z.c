/*
 * XREFs of ??0DDAMetaData@@QEAA@II@Z @ 0x1C0180834
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0181558 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DDAMetaData *__fastcall DDAMetaData::DDAMetaData(DDAMetaData *this)
{
  struct DXGPROCESS *Current; // rax

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 5) = 128;
  *((_DWORD *)this + 10) = 64;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
    Current = (struct DXGPROCESS *)*((_QWORD *)Current + 9);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 7) = Current;
  return this;
}
