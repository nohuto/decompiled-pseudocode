/*
 * XREFs of ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180001860
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001BF0 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180001F70 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     memcpy_s @ 0x180001300 (memcpy_s.c)
 */

bool __fastcall wil::details::shared_buffer::create(LPVOID *this, const void *a2, rsize_t a3)
{
  volatile signed __int32 *v6; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v8; // rax
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  HANDLE v11; // rax

  if ( !a3 )
  {
    v6 = (volatile signed __int32 *)*this;
    if ( v6 )
    {
      if ( !_InterlockedDecrement(v6) )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, *this);
      }
      *this = 0LL;
      this[1] = 0LL;
    }
LABEL_14:
    LOBYTE(v9) = 1;
    return (char)v9;
  }
  v8 = GetProcessHeap();
  v9 = (volatile signed __int32 *)HeapAlloc(v8, 0, a3 + 4);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 0;
    if ( a2 )
      memcpy_s((void *const)(v9 + 1), a3, a2, a3);
    if ( *this )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)*this) )
      {
        v11 = GetProcessHeap();
        HeapFree(v11, 0, *this);
      }
      *this = 0LL;
      this[1] = 0LL;
    }
    *this = (LPVOID)v10;
    this[1] = (LPVOID)a3;
    _InterlockedIncrement(v10);
    goto LABEL_14;
  }
  return (char)v9;
}
