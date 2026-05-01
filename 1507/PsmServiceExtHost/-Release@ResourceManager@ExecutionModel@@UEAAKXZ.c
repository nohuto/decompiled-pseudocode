/*
 * XREFs of ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180037BB0
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@W7EAAKXZ @ 0x180025040 (-Release@ResourceManager@ExecutionModel@@W7EAAKXZ.c)
 *     ?Release@ResourceManager@ExecutionModel@@WBA@EAAKXZ @ 0x180025050 (-Release@ResourceManager@ExecutionModel@@WBA@EAAKXZ.c)
 *     ?Release@ResourceManager@ExecutionModel@@WBI@EAAKXZ @ 0x180025060 (-Release@ResourceManager@ExecutionModel@@WBI@EAAKXZ.c)
 *     ?Release@ResourceManager@ExecutionModel@@WCA@EAAKXZ @ 0x180025070 (-Release@ResourceManager@ExecutionModel@@WCA@EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180033F7C (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Release(ExecutionModel::ResourceManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 25);
  if ( !v2 && this )
  {
    ExecutionModel::ResourceManager::~ResourceManager(this);
    operator delete(this);
  }
  return v2;
}
