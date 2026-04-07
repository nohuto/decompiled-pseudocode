/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18007249C
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800712D0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18007235C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  bool v4; // di
  HANDLE ProcessHeap; // rax
  _WORD *v6; // rax
  _WORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  volatile signed __int32 *v11; // rax

  v4 = *((_DWORD *)this + 4) != 0;
  if ( !*((_QWORD *)this + 3) )
  {
    if ( *((_DWORD *)this + 4) )
    {
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 8u, 0x1B8uLL);
      *((_QWORD *)this + 3) = v6;
      if ( v6 )
      {
        v7 = v6 + 220;
        *((_DWORD *)this + 8) = 5;
        while ( v6 != v7 )
        {
          *v6 = 88;
          v6 += 44;
        }
      }
    }
  }
  v8 = (_DWORD *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    if ( !v4 || (v9 = &v8[22 * *((unsigned __int16 *)this + 16)], v8 == v9) )
    {
LABEL_14:
      v11 = (volatile signed __int32 *)*((_QWORD *)this + 1);
      *((_WORD *)this + 17) = (*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      wil::details_abi::ThreadLocalFailureInfo::Set(
        (wil::details_abi::ThreadLocalFailureInfo *)(*((_QWORD *)this + 3) + 88LL * *((unsigned __int16 *)this + 17)),
        a2,
        _InterlockedIncrement(v11));
    }
    else
    {
      v10 = v8 + 2;
      while ( *(v10 - 1) <= *((_DWORD *)this + 4) || *v10 != *((_DWORD *)a2 + 1) )
      {
        v10 += 22;
        if ( v10 - 2 == v9 )
          goto LABEL_14;
      }
    }
  }
}
