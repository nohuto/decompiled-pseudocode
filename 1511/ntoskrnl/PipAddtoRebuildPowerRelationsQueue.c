/*
 * XREFs of PipAddtoRebuildPowerRelationsQueue @ 0x1404EEFE0
 * Callers:
 *     IoResolveDependency @ 0x14013888C (IoResolveDependency.c)
 *     PipAddDependencyEdgeBetweenNodes @ 0x1401BEB4C (PipAddDependencyEdgeBetweenNodes.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404EEF24 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140534D14 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoClearDependency @ 0x140600A14 (IoClearDependency.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x1404EF060 (PipIsDeviceReadyForPowerRelations.c)
 */

__int64 __fastcall PipAddtoRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rdi

  result = PipIsDeviceReadyForPowerRelations(a1);
  if ( (_BYTE)result )
  {
    if ( v2 )
    {
      result = *(_QWORD *)(v2 + 312);
      v3 = *(_QWORD *)(result + 80);
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v4 = *(void **)(v3 + 48);
      if ( v4 )
      {
        v5 = (_QWORD *)(v3 + 72);
        if ( (_QWORD *)*v5 == v5 )
        {
          ObfReferenceObject(v4);
          ++*(_DWORD *)(v3 + 88);
          result = qword_1402FAEF8;
          *v5 = &PiRebuildPowerRelationsQueue;
          *(_QWORD *)(v3 + 80) = result;
          if ( *(__int64 **)result != &PiRebuildPowerRelationsQueue )
            __fastfail(3u);
          *(_QWORD *)result = v5;
          qword_1402FAEF8 = v3 + 72;
        }
      }
    }
  }
  return result;
}
