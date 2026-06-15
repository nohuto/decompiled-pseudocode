/*
 * XREFs of ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009400
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002280 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006D9C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A820 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CAPOProcessNode::SetRightFormat(CAPOProcessNode *this, struct IAudioMediaType *a2)
{
  CAudioMediaType *v2; // rdi
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rdi
  __int64 v6; // r14
  __int64 (__fastcall *v7)(CAudioMediaType *); // rbp

  v2 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v2 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(v2);
    else
      v7(v2);
  }
  if ( *((struct IAudioMediaType **)this + 2) != a2 )
  {
    if ( a2 )
    {
      AddRef = a2->lpVtbl->AddRef;
      if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
        _InterlockedIncrement((volatile signed __int32 *)&a2[1]);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(a2);
    }
    v6 = *((_QWORD *)this + 2);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = a2;
  }
}
