/*
 * XREFs of ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@HH@Z @ 0x14030A9D8
 * Callers:
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018873C (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x140188800 (BRUSHOBJ_pvGetRbrush.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14018888C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 * Callees:
 *     ?cRef@RBRUSH@@QEAAJJH@Z @ 0x14030A944 (-cRef@RBRUSH@@QEAAJJH@Z.c)
 */

void __fastcall vTryToCacheRealization(struct EBRUSHOBJ *a1, struct RBRUSH *a2, struct BRUSH *a3, int a4, int a5)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  _DWORD v14[10]; // [rsp+30h] [rbp-28h] BYREF

  v9 = Gre::Base::Globals(a1);
  v10 = HmgPentryFromPobj(v9, a3);
  if ( *((_DWORD *)v9 + 731)
    || (*(_DWORD *)a3 & 0x800000) == 0
    || (!a5
      ? (v11 = *((_DWORD *)a2 + 3))
      : (v14[0] = 0, GreProbeAndReadFromUntrustedVa(v14, 4uLL, (char *)a2 + 12, 4uLL, 1uLL), v11 = v14[0]),
        !v11 || (v12 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE, v12 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))) )
  {
    RBRUSH::cRef(a2, 1u, a5);
    if ( !*((_DWORD *)a3 + 24) && !_InterlockedExchange((volatile __int32 *)a3 + 24, 1) )
    {
      RBRUSH::cRef(a2, 2u, a5);
      v13 = *((_DWORD *)a3 + 10) | 0x40000000;
      if ( a4 != 1 )
        v13 = *((_DWORD *)a3 + 10) & 0xBFFFFFFF;
      *((_DWORD *)a3 + 10) = v13;
      *((_DWORD *)a3 + 26) = *((_DWORD *)a1 + 13);
      *((_DWORD *)a3 + 27) = *((_DWORD *)a1 + 11);
      *((_DWORD *)a3 + 28) = *((_DWORD *)a1 + 10);
      *((_QWORD *)a3 + 15) = a2;
      *((_QWORD *)a3 + 16) = *(_QWORD *)(*((_QWORD *)a1 + 10) + 48LL);
      *((_DWORD *)a3 + 29) = *((_DWORD *)a1 + 7);
      _InterlockedExchange((volatile __int32 *)a3 + 25, *((_DWORD *)a1 + 12));
    }
  }
}
