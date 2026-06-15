/*
 * XREFs of ??A?$CSimpleArray@PEAUtWAVEFORMATEX@@V?$CSimpleArrayEqualHelper@PEAUtWAVEFORMATEX@@@ATL@@@ATL@@QEAAAEAPEAUtWAVEFORMATEX@@H@Z @ 0x1800A4F0C
 * Callers:
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x1800A4B9C (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180069C8C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<tWAVEFORMATEX *,ATL::CSimpleArrayEqualHelper<tWAVEFORMATEX *>>::operator[](
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    ATL::_AtlRaiseException(0xC000008C);
    JUMPOUT(0x1800A4F32LL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
