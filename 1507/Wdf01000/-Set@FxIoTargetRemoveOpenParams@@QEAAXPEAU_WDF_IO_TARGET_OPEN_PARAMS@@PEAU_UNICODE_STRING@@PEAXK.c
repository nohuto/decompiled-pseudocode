/*
 * XREFs of ?Set@FxIoTargetRemoveOpenParams@@QEAAXPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAU_UNICODE_STRING@@PEAXK@Z @ 0x1C002144C
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C00210CC (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTargetRemoveOpenParams::Set(
        FxIoTargetRemoveOpenParams *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        _UNICODE_STRING *Name,
        void *Ea,
        unsigned int EaLength)
{
  _UNICODE_STRING v6; // xmm0
  __int64 *AllocationSize; // rax
  __int64 v8; // rax
  _LARGE_INTEGER *p_AllocationSize; // rcx

  v6 = *Name;
  this->OpenType = WdfIoTargetOpenByName;
  this->EaBuffer = Ea;
  this->TargetDeviceName = v6;
  this->EaBufferLength = EaLength;
  this->DesiredAccess = OpenParams->DesiredAccess;
  this->FileAttributes = OpenParams->FileAttributes;
  this->ShareAccess = OpenParams->ShareAccess;
  this->CreateDisposition = OpenParams->CreateDisposition;
  this->CreateOptions = OpenParams->CreateOptions;
  AllocationSize = OpenParams->AllocationSize;
  if ( AllocationSize )
  {
    v8 = *AllocationSize;
    p_AllocationSize = &this->AllocationSize;
    this->AllocationSizePointer = p_AllocationSize;
    p_AllocationSize->QuadPart = v8;
  }
  else
  {
    this->AllocationSizePointer = 0LL;
  }
}
