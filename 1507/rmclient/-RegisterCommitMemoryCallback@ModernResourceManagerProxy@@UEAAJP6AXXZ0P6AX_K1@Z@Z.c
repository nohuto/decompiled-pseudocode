/*
 * XREFs of ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@UEAAJP6AXXZ0P6AX_K1@Z@Z @ 0x180006720
 * Callers:
 *     ?RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ @ 0x1800063E4 (-RegisterCommitMemoryCallback@CMemoryManager@System@Windows@@CAJXZ.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180006624 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterCommitMemoryCallback(
        ModernResourceManagerProxy *this,
        void (*a2)(void),
        void (*a3)(void),
        void (*a4)(unsigned __int64, unsigned __int64))
{
  __int64 result; // rax

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a4;
  result = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( (int)result < 0 )
  {
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  return result;
}
