/*
 * XREFs of ?GetBiosNumLockStatus@@YAXXZ @ 0x1C009D844
 * Callers:
 *     InitKeyboard @ 0x1C009D464 (InitKeyboard.c)
 * Callees:
 *     <none>
 */

void GetBiosNumLockStatus(void)
{
  enum _INTERFACE_TYPE v0; // ebx
  __int16 Context; // [rsp+60h] [rbp+8h] BYREF
  char v2; // [rsp+62h] [rbp+Ah]
  enum _CONFIGURATION_TYPE PeripheralType; // [rsp+68h] [rbp+10h] BYREF
  enum _CONFIGURATION_TYPE ControllerType; // [rsp+70h] [rbp+18h] BYREF
  enum _INTERFACE_TYPE BusType; // [rsp+78h] [rbp+20h] BYREF

  ControllerType = KeyboardController;
  Context = 0;
  v0 = Internal;
  v2 = 0;
  PeripheralType = KeyboardPeripheral;
  while ( 1 )
  {
    BusType = v0;
    IoQueryDeviceDescription(
      &BusType,
      0LL,
      &ControllerType,
      0LL,
      &PeripheralType,
      0LL,
      KeyboardDeviceSpecificCallout,
      &Context);
    if ( v2 )
      break;
    if ( (unsigned int)++v0 >= (MaximumInterfaceType|Eisa) )
      return;
  }
  word_1C0322A96 = Context;
}
