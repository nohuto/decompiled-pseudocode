/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00459F4
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C0004DE0 (UsbhRegDriverEntry.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C00081D0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C000845C (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C00086C0 (UsbhGetRegUsbHubFlags.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0008AE8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhRegQueryGlobalKey @ 0x1C000B3E0 (UsbhRegQueryGlobalKey.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C001B7A0 (Usbh_USB_OS_VENDOR_CODE.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B820 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0021000 (UsbhSetPdoRegistryParameter.c)
 *     UsbhBusConnectPdo @ 0x1C0021174 (UsbhBusConnectPdo.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C0025D70 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0027360 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C0029330 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     UsbhQueryGlobalHubValue @ 0x1C004C520 (UsbhQueryGlobalHubValue.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C004C9D0 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C004CA80 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C004CB30 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C004CBE0 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C004CCA0 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C004CD50 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C004CE00 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C004CEC0 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C004CF70 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C004D020 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C004D0D0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C004D1B0 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C004D290 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C004D340 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C004D3F0 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C004D4A0 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C004D550 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C004D600 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C004D6B0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C0056DAC (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C0056E50 (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0057000 (UsbhDeleteUxdSubKeys.c)
 *     UsbhQueryUxdDevice @ 0x1C0057760 (UsbhQueryUxdDevice.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00581D4 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00459F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00459F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00459F4: mov     rax, rsp
 * 00000001C00459F7: mov     [rax+8], rbx
 * 00000001C00459FB: mov     [rax+10h], rbp
 * 00000001C00459FF: mov     [rax+18h], rsi
 * 00000001C0045A03: mov     [rax+20h], rdi
 * 00000001C0045A07: push    r12
 * 00000001C0045A09: push    r14
 * 00000001C0045A0B: push    r15
 * 00000001C0045A0D: sub     rsp, 40h
 * 00000001C0045A11: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0045A19: lea     rsi, aNull; "NULL"
 * 00000001C0045A20: mov     r15, rcx
 * 00000001C0045A23: xor     r12d, r12d
 * 00000001C0045A26: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0045A2D: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0045A31: movzx   r14d, r9w
 * 00000001C0045A35: mov     bpl, dl
 * 00000001C0045A38: mov     eax, [rcx+2Ch]
 * 00000001C0045A3B: test    al, 1
 * 00000001C0045A3D: jz      short loc_1C0045A9E
 * 00000001C0045A3F: cmp     [rcx+29h], dl
 * 00000001C0045A42: jb      short loc_1C0045A9E
 * 00000001C0045A44: test    rdi, rdi
 * 00000001C0045A47: jz      short loc_1C0045A5B
 * 00000001C0045A49: mov     rdx, rbx
 * 00000001C0045A4C: inc     rdx
 * 00000001C0045A4F: cmp     [rdi+rdx*2], r12w
 * 00000001C0045A54: jnz     short loc_1C0045A4C
 * 00000001C0045A56: inc     rdx
 * 00000001C0045A59: jmp     short loc_1C0045A60
 * 00000001C0045A5B: mov     edx, 5
 * 00000001C0045A60: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0045A67: test    rdi, rdi
 * 00000001C0045A6A: mov     rcx, [rcx+18h]
 * 00000001C0045A6E: mov     r8, rsi
 * 00000001C0045A71: cmovnz  r8, rdi
 * 00000001C0045A75: mov     [rsp+58h+var_28], r12
 * 00000001C0045A7A: add     rdx, rdx
 * 00000001C0045A7D: movzx   r9d, r14w
 * 00000001C0045A81: mov     [rsp+58h+var_30], rdx
 * 00000001C0045A86: mov     edx, 2Bh ; '+'
 * 00000001C0045A8B: mov     [rsp+58h+var_38], r8
 * 00000001C0045A90: mov     r8, [rsp+58h+arg_20]
 * 00000001C0045A98: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0045A9E: test    rdi, rdi
 * 00000001C0045AA1: jz      short loc_1C0045AB2
 * 00000001C0045AA3: inc     rbx
 * 00000001C0045AA6: cmp     [rdi+rbx*2], r12w
 * 00000001C0045AAB: jnz     short loc_1C0045AA3
 * 00000001C0045AAD: inc     rbx
 * 00000001C0045AB0: jmp     short loc_1C0045AB7
 * 00000001C0045AB2: mov     ebx, 5
 * 00000001C0045AB7: mov     r9, [rsp+58h+arg_20]
 * 00000001C0045ABF: lea     rax, [rbx+rbx]
 * 00000001C0045AC3: mov     [rsp+58h+var_20], r12
 * 00000001C0045AC8: test    rdi, rdi
 * 00000001C0045ACB: mov     [rsp+58h+var_28], rax
 * 00000001C0045AD0: mov     r8d, 1
 * 00000001C0045AD6: cmovnz  rsi, rdi
 * 00000001C0045ADA: movzx   edx, bpl
 * 00000001C0045ADE: mov     [rsp+58h+var_30], rsi
 * 00000001C0045AE3: mov     rcx, r15
 * 00000001C0045AE6: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C0045AEC: call    cs:__imp_WppAutoLogTrace
 * 00000001C0045AF2: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0045AF7: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0045AFC: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0045B01: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0045B06: add     rsp, 40h
 * 00000001C0045B0A: pop     r15
 * 00000001C0045B0C: pop     r14
 * 00000001C0045B0E: pop     r12
 * 00000001C0045B10: retn
 */
