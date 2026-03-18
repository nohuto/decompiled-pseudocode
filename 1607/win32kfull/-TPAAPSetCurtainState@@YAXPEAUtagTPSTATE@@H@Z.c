/*
 * XREFs of ?TPAAPSetCurtainState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E8868
 * Callers:
 *     ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E7F18 (-InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01EA898 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     <none>
 */

void __fastcall TPAAPSetCurtainState(struct tagTPSTATE *a1, unsigned int a2)
{
  if ( ((*((_DWORD *)a1 + 480) >> 13) & 1) != (a2 != 0) )
  {
    *((_DWORD *)a1 + 480) ^= ((unsigned __int16)*((_DWORD *)a1 + 480) ^ (unsigned __int16)((_WORD)a2 << 13)) & 0x2000;
    EtwTraceTouchPadCurtainState(a2);
  }
}
