/*
 * XREFs of ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18002A614
 * Callers:
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180027850 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x180066F94 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 */

__int64 **__fastcall std::vector<Microsoft::WRL::WeakRef>::erase(__int64 **a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+60h] [rbp+18h]

  v16 = a3;
  v4 = *a1;
  v5 = a4;
  v6 = a3;
  if ( a3 == *a1 && (v9 = a1[1], a4 == v9) )
  {
    if ( v4 != v9 )
    {
      do
      {
        v10 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        ++v4;
      }
      while ( v4 != v9 );
      v6 = v16;
    }
    a1[1] = *a1;
  }
  else if ( a3 != a4 )
  {
    v12 = a1[1];
    if ( a4 != v12 )
    {
      do
      {
        v13 = 0LL;
        if ( &v15 != v5 )
        {
          v13 = *v5;
          *v5 = 0LL;
        }
        v14 = *v6;
        *v6 = v13;
        v15 = v14;
        Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(&v15);
        ++v6;
        ++v5;
      }
      while ( v5 != v12 );
    }
    std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, v6, a1[1]);
    a1[1] = v6;
    v6 = v16;
  }
  *a2 = v6;
  return a2;
}
