/*
 * XREFs of ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18001412C
 * Callers:
 *     ??1?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800140A8 (--1-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x1800149D0 (--_E-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x180014870 (--_Glocale@std@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(__int64 a1)
{
  bool v1; // zf
  void **result; // rax
  std::locale *v4; // rcx

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  if ( !v1 )
    operator delete(**(void ***)(a1 + 24));
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  **(_DWORD **)(a1 + 88) = 0;
  result = &std::basic_streambuf<unsigned short>::`vftable';
  *(_DWORD *)(a1 + 112) &= ~1u;
  v4 = *(std::locale **)(a1 + 96);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &std::basic_streambuf<unsigned short>::`vftable';
  if ( v4 )
    return (void **)std::locale::`scalar deleting destructor'(v4, 1u);
  return result;
}
