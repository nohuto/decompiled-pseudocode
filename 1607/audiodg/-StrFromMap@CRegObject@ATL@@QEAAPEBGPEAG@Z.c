/*
 * XREFs of ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x140037F74
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140036E84 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x140036B10 (-GetValueAt@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z.c)
 */

const unsigned __int16 *__fastcall ATL::CRegObject::StrFromMap(ATL::CRegObject *this, unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // r14

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = 0LL;
  v6 = 0;
  if ( *((int *)this + 6) <= 0 )
  {
LABEL_5:
    v6 = -1;
  }
  else
  {
    v7 = 0LL;
    while ( lstrcmpiW(*(LPCWSTR *)(v7 + *((_QWORD *)this + 1)), a2) )
    {
      ++v6;
      v7 += 8LL;
      if ( v6 >= *((_DWORD *)this + 6) )
        goto LABEL_5;
    }
  }
  if ( v6 != -1 )
    v5 = *(_QWORD *)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
                      (__int64)this + 8,
                      v6);
  LeaveCriticalSection(v2);
  return (const unsigned __int16 *)v5;
}
