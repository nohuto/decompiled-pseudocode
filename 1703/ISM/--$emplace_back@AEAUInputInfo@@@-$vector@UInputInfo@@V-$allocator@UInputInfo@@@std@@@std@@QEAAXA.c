/*
 * XREFs of ??$emplace_back@AEAUInputInfo@@@?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAAXAEAUInputInfo@@@Z @ 0x180054868
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x1800542B8 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 *     ?DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180080900 (-DeliverInput@BufferedInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??$construct@UInputInfo@@AEBU1@@?$_Wrap_alloc@V?$allocator@UInputInfo@@@std@@@std@@QEAAXPEAUInputInfo@@AEBU2@@Z @ 0x180054AF0 (--$construct@UInputInfo@@AEBU1@@-$_Wrap_alloc@V-$allocator@UInputInfo@@@std@@@std@@QEAAXPEAUInpu.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<InputInfo>::emplace_back<InputInfo &>(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdi
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = (v5 - *(_QWORD *)a1) / 1888;
    if ( v7 == 0x22B63CBEEA4E1ALL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v8 = v7 + 1;
    v9 = (v4 - *(_QWORD *)a1) / 1888;
    v10 = v9 >> 1;
    if ( v9 <= 0x22B63CBEEA4E1ALL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    if ( v11 )
    {
      if ( v11 > 0x22B63CBEEA4E1ALL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v13 = 1888 * v11;
      if ( 1888 * v11 < 0x1000 )
      {
        v12 = operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v14 = operator new(v13 + 39);
        v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      std::_Wrap_alloc<std::allocator<InputInfo>>::construct<InputInfo,InputInfo const &>(v10, &v12[236 * v7], a2);
      memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<InputInfo>>::deallocate(v15, (char *)v12, v11);
      throw;
    }
    if ( *(_QWORD *)a1 )
      std::_Deallocate(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 1888LL, 0x760uLL);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = &v12[236 * v8];
    result = (__int64)&v12[236 * v11];
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    result = std::_Wrap_alloc<std::allocator<InputInfo>>::construct<InputInfo,InputInfo const &>(v5, v5, a2);
    *(_QWORD *)(a1 + 8) += 1888LL;
  }
  return result;
}
