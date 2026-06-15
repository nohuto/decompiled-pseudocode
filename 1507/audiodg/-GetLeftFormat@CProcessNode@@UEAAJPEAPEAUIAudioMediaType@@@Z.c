/*
 * XREFs of ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400092D0
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140004BB0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140005510 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x1400062E0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14000F0E0 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CProcessNode::GetLeftFormat(CProcessNode *this, struct IAudioMediaType **a2)
{
  volatile signed __int32 *v2; // rbx
  unsigned int (__fastcall *v3)(CAudioMediaType *__hidden); // rdi

  if ( !a2 )
    return 2147500035LL;
  *a2 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  v2 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v2 + 8LL);
    if ( v3 == CAudioMediaType::AddRef )
      _InterlockedIncrement(v2 + 2);
    else
      v3((CAudioMediaType *)v2);
  }
  return 0LL;
}
