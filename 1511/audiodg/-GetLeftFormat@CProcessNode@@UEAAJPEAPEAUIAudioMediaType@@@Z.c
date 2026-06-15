/*
 * XREFs of ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140011350
 * Callers:
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140006DF0 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000C960 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000D2D0 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000DD10 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
