/*
 * XREFs of ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x18000D180
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000CE00 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180046DB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?copy@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x18008D7B0 (-copy@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 */

void __fastcall std::wstring::_Copy(void **a1, unsigned __int64 a2, void *a3)
{
  void *v3; // r14
  void **v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  LPVOID v9; // r12
  HANDLE ProcessHeap; // rax
  void *v11; // rax
  unsigned __int64 v12; // rcx
  void *v13; // rdx
  void *v20; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a1;
  v5 = a2 | 7;
  if ( (a2 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v5 = a2;
  }
  else
  {
    v6 = (unsigned __int64)a1[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > 0x7FFFFFFFFFFFFFFELL - v7 )
        v5 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  try
  {
    v8 = v5 + 1;
    v9 = 0LL;
    if ( v5 != -1LL )
    {
      if ( v8 > 0x7FFFFFFFFFFFFFFFLL
        || (ProcessHeap = GetProcessHeap(), (v9 = HeapAlloc(ProcessHeap, 0, 2 * v8)) == 0LL) )
      {
        std::_Xbad_alloc();
      }
    }
  }
  catch ( ... )
  {
    try
    {
      v11 = 0LL;
      v12 = a2 + 1;
      if ( a2 != -1LL && (v12 > 0x7FFFFFFFFFFFFFFFLL || (v11 = operator new(2 * v12)) == 0LL) )
        std::_Xbad_alloc();
      v20 = v11;
    }
    catch ( ... )
    {
      std::wstring::_Tidy(a1, 1, 0LL);
      throw;
    }
    v4 = a1;
    v3 = a3;
    v5 = a2;
    v9 = v20;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 8 )
      v13 = v4;
    else
      v13 = *v4;
    std::char_traits<unsigned short>::copy(v9, v13);
  }
  if ( (unsigned __int64)v4[3] >= 8 )
    operator delete(*v4);
  *v4 = v9;
  v4[3] = (void *)v5;
  v4[2] = v3;
  if ( v5 >= 8 )
    v4 = (void **)v9;
  *((_WORD *)v4 + (_QWORD)v3) = 0;
}
