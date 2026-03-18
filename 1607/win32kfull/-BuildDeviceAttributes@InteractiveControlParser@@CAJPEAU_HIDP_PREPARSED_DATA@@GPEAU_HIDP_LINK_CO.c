/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FE34
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FED4 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C023FFF4 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02403DC (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceAttributes(
        PHIDP_PREPARSED_DATA PreparsedData,
        __int64 a2,
        struct _HIDP_LINK_COLLECTION_NODE *a3,
        struct _INTERACTIVECTRL_CAPABILITIES *a4,
        struct InteractiveControlDevice *a5)
{
  __int64 result; // rax
  struct _HIDP_PREPARSED_DATA *v7; // rdx
  __int64 v8; // r8
  struct _INTERACTIVECTRL_CAPABILITIES *v9; // rbx
  struct _INTERACTIVECTRL_CAPABILITIES *v10; // rcx
  __int64 v11; // rdx
  struct _INTERACTIVECTRL_CAPABILITIES **v12; // rax

  result = InteractiveControlParser::BuildDeviceShapeDescriptor(a5, PreparsedData);
  if ( (int)result < 0 )
    result = 0LL;
  if ( *((_DWORD *)a4 + 18) )
  {
    result = InteractiveControlParser::FindDigitizerForDevice(a5, v7);
    if ( (int)result < 0 )
    {
      v9 = (struct _INTERACTIVECTRL_CAPABILITIES *)*((_QWORD *)a4 + 14);
      while ( v9 != (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a4 + 112) )
      {
        v10 = v9;
        v9 = *(struct _INTERACTIVECTRL_CAPABILITIES **)v9;
        if ( *((_DWORD *)v10 + 4) == 1 )
        {
          v11 = *(_QWORD *)v10;
          v12 = (struct _INTERACTIVECTRL_CAPABILITIES **)*((_QWORD *)v10 + 1);
          if ( *(struct _INTERACTIVECTRL_CAPABILITIES **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
            __fastfail(3u);
          *v12 = (struct _INTERACTIVECTRL_CAPABILITIES *)v11;
          *(_QWORD *)(v11 + 8) = v12;
          --*((_DWORD *)a4 + *((int *)v10 + 4) + 17);
          --*((_DWORD *)a4 + 26);
          Win32FreePool(v10, v11, v8);
        }
      }
      return 0LL;
    }
  }
  return result;
}
