/*
 * XREFs of ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800058DC
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumUnknown@@@Z @ 0x1800057C0 (-Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumUnknown@@@Z.c)
 *     ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumObjects@@@Z @ 0x1800058C0 (-Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumObjects@@@Z.c)
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x180008070 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Clone(
        CEnumerableObjectCollection *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // rsi
  int v6; // edi
  _QWORD *v7; // rbx
  int v8; // edx
  int v9; // eax
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rcx

  v3 = a2;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 8);
    v9 = *((_DWORD *)this + 7);
    *v7 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    v7[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    v7[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v7 + 6) = 1;
    *((_DWORD *)v7 + 7) = v9;
    *((_DWORD *)v7 + 8) = v8;
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[8] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v10 = *((int *)this + 12);
    v11 = *((_DWORD *)this + 12);
    if ( *((_DWORD *)this + 7) > (int)v10 )
      v11 = *((_DWORD *)this + 7);
    v6 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
           v7 + 5,
           v11);
    if ( v6 >= 0 )
    {
      v12 = 0LL;
      v13 = v10;
      do
      {
        if ( v12 >= v13 )
          break;
        v14 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v12);
        if ( v14 )
        {
          v15 = v7[6];
          v6 = 0;
          if ( v15 != v7[8]
            || (v6 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                       v7 + 5,
                       v15 + 1),
                v6 >= 0) )
          {
            v16 = (_QWORD *)(v7[5] + 8 * v7[6]++);
            if ( v16 )
              *v16 = v14;
          }
          if ( v6 >= 0 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
            *((_DWORD *)v7 + 7) = *((_DWORD *)this + 7);
            *((_DWORD *)v7 + 8) = *((_DWORD *)this + 8);
          }
        }
        else
        {
          v6 = -2147418113;
        }
        ++v12;
      }
      while ( v6 >= 0 );
      v3 = a2;
    }
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(_QWORD *, const struct _GUID *, void **))*v7)(v7, v3, a3);
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
